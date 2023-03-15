/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header for libmy.a
*/

#include <stdbool.h>

#ifndef MY_H_
    #define MY_H_

    void my_putchar(unsigned char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_getnbr(char const *str);
    char **my_str_to_word_array(char const *str, char delim);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strdup(char const *src);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char *concat_str(char *base, char *next);
    int my_strlen(char const *str);
    int my_boardlen(char **board);
    char **copy_board(char **board);
    bool is_same_str(const char *str, const char *compare);
    void free_board(char **board);
    bool is_same_part_str(const char *str, const char *compare, int n);
    int select_signal_error_message(int wstatus);
    bool is_for_sbml(char c);

#endif
