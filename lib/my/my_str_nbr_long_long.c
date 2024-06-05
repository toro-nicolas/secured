/*
** EPITECH PROJECT, 2023
** my_str_nbr_long_long
** File description:
** Returns the strings conversion of a long long number (nb)
*/

#include "my.h"

static char *set_str_nb(long long int nb, int int_nb, int signe)
{
    char *nb_str = malloc(sizeof(char) * (int_nb + signe + 1));
    int j = 0;
    long long int figure_temp = nb;

    if (signe == 1)
        nb_str[int_nb] = '-';
    for (j = 0; j < int_nb; j++) {
        nb_str[j] = 48 + (figure_temp % 10);
        figure_temp = (figure_temp - (figure_temp % 10)) / 10;
    }
    nb_str[j + signe] = '\0';
    return my_revstr(nb_str);
}

char *my_str_nbr_long_long(long long int nb)
{
    int int_nb = 1;
    long long int temp_nb = nb;
    int signe = 0;

    if (nb == -9223372036854775807)
        return "-9223372036854775807";
    if (nb < 0) {
        signe = 1;
        nb = -nb;
    }
    while ((temp_nb / 10) != 0) {
        int_nb = int_nb + 1;
        temp_nb = temp_nb / 10;
    }
    return set_str_nb(nb, int_nb, signe);
}
