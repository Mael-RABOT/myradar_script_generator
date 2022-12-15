/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myradar-mael.rabot
** File description:
** random.c
*/

#include "include/my.h"
#include "include/bonus.h"

int randm_i(int min, int max)
{
    int res;
    res = rand() % max;
    if (res > max)
        return (randm_i(min, max));
    return (res);
}

char *int_to_str(int nb)
{
    if (nb == 0)
        return ("0");
    int res[32];
    char *tmp;
    int sum = 0;
    while (nb > 0) {
        res[sum] = nb % 10;
        nb = nb / 10;
        sum++;
    }
    tmp = malloc(sum);
    for (int j = sum - 1; j >= 0; j--) {
        tmp[(sum - 1) - j] = res[j] + 48;
    }
    tmp[sum] = '\0';
    return (tmp);
}

char *randm_s(int min, int max)
{
    return (int_to_str(randm_i(min, max)));
}
