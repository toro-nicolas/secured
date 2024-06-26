/*
** EPITECH PROJECT, 2024
** secured
** File description:
** The destroy_table.c
*/

#include "../include/hashtable.h"

void delete_hashtable_entry(hashtable_entry_t **begin)
{
    hashtable_entry_t *tmp = *begin;
    hashtable_entry_t *next = NULL;

    while (tmp != NULL) {
        next = tmp->next;
        free(tmp->value);
        free(tmp);
        tmp = next;
    }
    *begin = NULL;
}

void delete_hashtable(hashtable_t *ht)
{
    if (ht == NULL)
        return;
    for (int index = 0; index < ht->len; index++)
        delete_hashtable_entry(&ht->table[index]);
    free(ht->table);
    free(ht);
}
