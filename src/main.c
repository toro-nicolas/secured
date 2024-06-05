/*
** EPITECH PROJECT, 2023
** secured
** File description:
** The main file of the project
*/

#include "../include/hashtable.h"

int main(int argc, char **argv)
{
    hashtable_t *ht = new_hashtable(&hash, 9);

    ht_insert(ht, "Vision", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos",
        "./Trash/Hollidays_Pics /. secret_folder/kratos.ai");
    ht_insert(ht, " <3", "old");
    ht_insert(ht, " <3", "new");
    ht_insert(ht, " <4", "+33 6 31 45 61 23 74");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 72");
    ht_insert(ht, "a", "a");
    ht_insert(ht, "b", "b");
    ht_insert(ht, "c", "c");
    ht_delete(ht, "Vision");
    ht_insert(ht, " <3", "new2");
    printf("Looking for \"%s\": \"%s\"\n", "Kratos", ht_search(ht, "Kratos"));
    ht_dump(ht);
    delete_hashtable(ht);
    return 0;
}
