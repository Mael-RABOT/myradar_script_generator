/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-mael.rabot
** File description:
** my_putchar.c
*/

#include <unistd.h>

void my_putchar_normal(char c)
{
    write(1, &c, 1);
}
