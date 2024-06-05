/*
** EPITECH PROJECT, 2024
** secured
** File description:
** The search.c
*/

#include "../include/hashtable.h"

static char *search_in_hashtable_entry(hashtable_entry_t *entry, int key)
{
    if (entry == NULL)
        return NULL;
    for (; entry != NULL; entry = entry->next) {
        if (entry->key == key)
            return entry->value;
    }
    return NULL;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hashed_key;
    int index;
    char *found_value = NULL;

    if (ht == NULL || key == NULL)
        return NULL;
    hashed_key = ht->hash(key, ht->len);
    index = hashed_key % ht->len;
    found_value = search_in_hashtable_entry(ht->table[index], hashed_key);
    if (found_value != NULL)
        return found_value;
    return NULL;
}
