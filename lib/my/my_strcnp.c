/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** power it
*/

#include "my.h"
#include <stddef.h>

bool is_same_part_str(const char *str, const char *compare, int n)
{
    if (str == NULL || compare == NULL)
        return false;
    for (int i = 0; i < n; i++)
        if (str[i] == '\0' || str[i] != compare[i])
            return false;
    return true;
}
