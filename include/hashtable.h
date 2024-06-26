/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#include "mylist.h"

#ifndef HASHTABLE_H_
    #define HASHTABLE_H_

typedef struct hashtable_entry_s {
    struct hashtable_entry_s *prev;
    int key;
    char *value;
    struct hashtable_entry_s *next;
} hashtable_entry_t;

typedef struct hashtable_s {
    int len;
    int (*hash)(char *, int);
    hashtable_entry_t **table;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

#endif /* HASHTABLE_H_ */
