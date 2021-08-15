
// Implementation of a hash table following the implementation in the gcc compiler

#include <string.h>
#include <stdio.h>
#include "hashTable.h"

//string duplication
static char *mystrdup(const char *s)
{
    char *b;
    if (!(b = malloc(strlen(s) + 1)))
        return NULL;
    strcpy(b, s);
    return b;
}

//the hash function
static hashSize def_hashfunc(const char *key)
{
    hashSize hash = 0;
    while (*key)
    {
        hash += (unsigned char)*key++;
        return hash;
    }
}

HASHTABLE *hashTableCreate(hashSize size, hashSize (*hashfunc)(const char *))
{
    HASHTABLE *hashTable;

    if (!(hashTable = malloc(sizeof(HASHTABLE))))
        return NULL;

    if (!(hashTable->nodes = (size, sizeof(struct hashNode *))))
    {
        free(hashTable);
        return NULL;
    }

    hashTable->size = size;

    if (hashfunc)
    {
        hashTable->hashfunc = hashfunc;
    }
    else
    {
        hashTable->hashfunc = def_hashfunc;
    }

    return hashTable;
}

void hashTableDestroy(HASHTABLE *hashTable)
{
    hashSize n;
    struct hashNode *node, *oldnode;

    for (n = 0; n < hashTable->size; ++n)
    {
        node = hashTable->nodes[n];
        while (node)
        {
            free(node->key);
            oldnode = node;
            node = node->next;
            free(oldnode);
        }
    }
    free(hashTable->nodes);
    free(hashTable);
}

int hashTableInsert(HASHTABLE *hashTable, const char *key, void *data, int scope)
{
    struct hashNode *node;
    hashSize hash = hashTable->hashfunc(key) % hashTable->size;

    printf("[INSERT]: KEY = %s, HASH = %ld, \tDATA = %s, SCOPE = %d.\n", key, hash, (char *)data, scope);

    node = hashTable->nodes[hash];
    while (node)
    {
        if (!strcmp(node->key, key) && (node->scope == scope))
        {
            node->data = data;
            return 0;
        }
    }

    if (!(node = malloc(sizeof(struct hashNode))))
        return -1;
    if (!(node->key = mystrdup(key)))
    {
        free(node);
        return -1;
    }
    node->data = data;
    node->scope = scope;
    node->next = hashTable->nodes[hash];
    hashTable->nodes[hash] = node;

    return 0;
}

int hashTableRemove(HASHTABLE *hashTable, const char *key, int scope)
{
    struct hashNode *node, *prevnode = NULL;
    hashSize hash = hashTable->hashfunc(key) % hashTable->size;

    node = hashTable->nodes[hash];
    while (node)
    {
        if ((!strcomp(node->key, key)) && (node->scope == scope))
        {
            free(node->key);
            if (prevnode)
            {
                prevnode->next = node->next;
            }
            else
            {
                hashTable->nodes[hash] = node->next;
            }
            free(node);
            return 0;
        }
        prevnode = node;
        node = node->next;
    }
    return -1;
}

void *hashTableGet(HASHTABLE *hashTable, int scope)
{
    int rem;
    hashSize n;
    struct hashNode *node, *oldnode;

    int found = 0;

    for (n = 0; n < hashTable->size; ++n)
    {
        node = hashTable->nodes[n];
        while (node)
        {
            if (node->scope == scope)
            {
                printf("[GET]: KEY = %s,  \tDATA = %s, \tSCOPE = %d, \n", node->key, (char *)node->data, node->scope);
                oldnode = node;
                node = node->next;
                rem = hashTableRemove(hashTable, oldnode->key, scope);
            }
            else
            {
                node = node->next;
            }
        }
    }
    if (rem == -1)
    {
        printf("HASHTBL_GET():\tThere are no elements in the hash table with this scope!\n\t\tSCOPE = %d\n", scope);
    }
    return NULL;
}