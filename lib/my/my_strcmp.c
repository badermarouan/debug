/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** power it
*/

#include "my.h"
#include <stddef.h>

bool is_same_str(const char *str, const char *compare)
{
    int i = 0;

    if (str == NULL || compare == NULL)
        return false;
    while (str[i] != '\0') {
        if (str[i] != compare[i])
            return false;
        i++;
    }
    if (compare[i] != '\0')
        return false;
    return true;
}
