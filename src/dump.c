/*
** EPITECH PROJECT, 2024
** secured
** File description:
** The dump.c
*/

#include "../include/hashtable.h"

static void display_entry_list(hashtable_entry_t *entry)
{
    if (entry == NULL)
        return;
    for (; entry != NULL; entry = entry->next)
        my_printf("> %d - %s\n", entry->key, entry->value);
}

void ht_dump(hashtable_t *ht)
{
    if (ht == NULL)
        return;
    for (int i = 0; i < ht->len; i++) {
        my_printf("[%d]:\n", i);
        display_entry_list(ht->table[i]);
    }
}
