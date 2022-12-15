/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myradar-mael.rabot
** File description:
** make_line
*/

#include "include/my.h"
#include "include/bonus.h"

char *create_airplane(char **tower_pos, int nb)
{
    char *line = malloc(sizeof(char) * 100);
    int speed = randm_i(MIN_SPEED, MAX_SPEED);
    speed += (speed < MIN_SPEED) ? MIN_SPEED : 0;
    my_strcpy(line, "");
    my_strcat(line, "A  ");
    my_strcat(line, tower_pos[randm_i(0, nb)]);
    my_strcat(line, "   ");
    my_strcat(line, tower_pos[randm_i(0, nb)]);
    my_strcat(line, "   ");
    my_strcat(line, int_to_str(speed));
    my_strcat(line, " ");
    my_strcat(line, randm_s(MIN_TIME, MAX_TIME));
    my_strcat(line, "\n");
    return (line);
}

char *create_tower(char **tower_pos, int nb)
{
    char *line = malloc(sizeof(char) * 100);
    int size = randm_i(MIN_SIZE, MAX_SIZE);
    size += (size < MIN_SIZE) ? MIN_SIZE : 0;
    my_strcpy(line, "");
    my_strcat(line, "T  ");
    my_strcat(line, tower_pos[nb]);
    my_strcat(line, "   ");
    my_strcat(line, int_to_str(size));
    my_strcat(line, "\n");
    return (line);
}
