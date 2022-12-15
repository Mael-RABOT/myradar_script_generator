/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myradar-mael.rabot
** File description:
** bonus
*/

#ifndef B_MUL_100_LYN_1_1_MYRADAR_MAEL_RABOT_BONUS_H_
    #define B_MUL_100_LYN_1_1_MYRADAR_MAEL_RABOT_BONUS_H_

    #define MAX_POS 11
    #define MIN_X 100
    #define MAX_X 1920
    #define MIN_Y 100
    #define MAX_Y 1080
    #define MIN_SPEED 5
    #define MAX_SPEED 10
    #define MIN_TIME 0
    #define MAX_TIME 5
    #define MIN_SIZE 5
    #define MAX_SIZE 20

    char *randm_s(int min, int max);
    char *int_to_str(int nb);
    int randm_i(int min, int max);

    char *create_airplane(char **tower_pos, int nb);
    char *create_tower(char **tower_pos, int nb);

#endif /* !B_MUL_100_LYN_1_1_MYRADAR_MAEL_RABOT_BONUS_H_ */
