/*
** EPITECH PROJECT, 2024
** secured
** File description:
** The create_table.c
*/

#include "../include/hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *hashtable;

    if (hash == NULL || len < 1) {
        my_putstr_error("Error: invalid hashtable.\n");
        return NULL;
    }
    hashtable = malloc(sizeof(hashtable_t));
    hashtable->hash = hash;
    hashtable->len = len;
    hashtable->table = malloc(sizeof(hashtable_entry_t *) * len);
    for (int i = 0; i < len; i++)
        hashtable->table[i] = NULL;
    return hashtable;
}
