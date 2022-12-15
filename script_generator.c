/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myradar-mael.rabot
** File description:
** script_generator
*/

#include "include/my.h"
#include "include/bonus.h"

void *print_man(void)
{
    int fd = open("README_generator.txt", O_RDONLY);
    if (fd == -1)
        return (NULL);
    int size = 3000;
    char buff[size + 1];
    read(fd, buff, size);
    my_printf("%s", buff);
    return (NULL);
}

int parser(int ac, char **av)
{
    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        print_man();
        return (0);
    }
    if (ac < 3 || ac > 3) {
        my_printf("./script_generator: Bad arguments: %d given but 1 is "   \
            "required\nRetry with -h\n", ac - 1);
        return (84);
    }
    return (1);
}

void create_file(char *plane, char *tower, char **tower_pos)
{
    char *filepath = malloc(sizeof(char) *30);
    my_strcpy(filepath, plane);
    my_strcat(filepath, "_plane_");
    my_strcat(filepath, tower);
    my_strcat(filepath, "_tower.rdr");
    int fd = open(filepath, O_WRONLY | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH \
                                                | S_IWUSR | S_IWGRP | S_IWOTH);
    char *line = malloc(sizeof(char) * 100);
    for (int i = 0; i < my_getnbr(tower); i++) {
        my_strcpy(line, create_tower(tower_pos, i));
        write(fd, line, my_strlen(line));
    }
    for (int i = 0; i < my_getnbr(plane); i++) {
        my_strcpy(line, create_airplane(tower_pos, my_getnbr(tower)));
        write(fd, line, my_strlen(line));
    }
    free(line);
    free(filepath);
}

int args_checker(char *plane_nb, char *tower_nb)
{
    if (my_getnbr(plane_nb) < 0) {
        my_printf("/script_generator: Bad arguments: %d given but number "
                    "higher than 0 required\nRetry with -h\n",
                    my_getnbr(plane_nb));
        return (84);
    }
    if (my_getnbr(tower_nb) < 0) {
        my_printf("/script_generator: Bad arguments: %d given but number "
                    "higher than 0 required\nRetry with -h\n",
                    my_getnbr(tower_nb));
        return (84);
    }
    if (my_getnbr(tower_nb) > 10) {
        my_printf("/script_generator: Bad arguments: %d given but number "
                    "smaller than 10 required\nRetry with -h\n",
                    my_getnbr(tower_nb));
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    time_t timer;
    int pars;
    char *tower_pos[] = {"660 570", "1300 1000", "1300 130", "750 160",
                        "1620 330", "150 260", "400 530",
                        "1000 620", "1500 800", "180 950", "1850 530"};
    srand(time(&timer));
    if ((pars = parser(ac, av)) != 1)
        return (pars);
    if (args_checker(av[1], av[2]) == 84)
        return (84);
    create_file(av[1], av[2], tower_pos);
    return (0);
}
