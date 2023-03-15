/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** function that reverse a string
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char *rev = malloc(sizeof(char) * (length + 1));
    int j = (length - 1);

    if (rev == NULL)
        return NULL;
    for (int i = 0; i <= j; i++) {
        rev[i] = str[j - i];
    }
    rev[length] = '\0';
    return rev;
}
