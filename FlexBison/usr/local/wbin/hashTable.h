#include "stdlib.h"

typedef size_t hashSize;

// struct for a single hash value
struct hashNode
{
    char *key;             // key for identifier
    void *data;            // data to be stored
    int scope;             // in what scope is the key
    struct hashNode *next; // pointer to the next node
};

// struct for the hash table
typedef struct hashTable
{
    hashSize size;           // user defined size of the table
    struct hashNode **nodes; // all the struct nodes
    hashSize (*hashfunc)(const char *);
} HASHTABLE;

HASHTABLE *hashTableCreate(hashSize size, hashSize (*hashfunc)(const char *));     // create the table
void hashTableDestroy(HASHTABLE *hashTable);                                       // destroy the table
int hashTableInsert(HASHTABLE *hashTable, const char *key, void *data, int scope); // insert in table
int hashTableRemove(HASHTABLE *hashTable, const char *key, int scope);             // remove from table
void *hashTableGet(HASHTABLE *hashTable, int scope);                               // get from table
