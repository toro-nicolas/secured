/*
** EPITECH PROJECT, 2024
** secured
** File description:
** The insert.c
*/

#include "../include/hashtable.h"

void push_front(hashtable_entry_t **begin, int key, char *value)
{
    hashtable_entry_t *new = malloc(sizeof(hashtable_entry_t));

    new->prev = NULL;
    new->value = my_strdup(value);
    new->key = key;
    new->next = *begin;
    if (*begin != NULL)
        (*begin)->prev = new;
    *begin = new;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index;
    int hashed_key;

    if (ht == NULL || key == NULL || value == NULL)
        return my_putstr_error("Invalid insert arguments\n");
    hashed_key = ht->hash(key, ht->len);
    index = hashed_key % ht->len;
    for (hashtable_entry_t *tmp = ht->table[index];
    tmp != NULL; tmp = tmp->next) {
        if (tmp->key == hashed_key) {
            free(tmp->value);
            tmp->value = my_strdup(value);
            return 0;
        }
    }
    push_front(&ht->table[index], hashed_key, value);
    return 0;
}
