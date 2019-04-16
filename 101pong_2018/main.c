/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** main
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int display_descrip(char const *str);
int return_arg(void);
void calc_angle(float xv, float yv, float zv);

void calc_velo_1(float xv, float yv, float zv)
{
    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", xv, yv, zv);
}

void calc_velo_2(float n, float xv, float x2)
{
    float xt = n * xv + x2;

    printf("At time t + %.0f, ball coordinates will be:\n", n);
    printf("(%.2f, ", xt);
}

void calc_velo_3(float n, float yv, float y2)
{
    float yt = n * yv + y2;

    printf("%.2f, ", yt);
}

void calc_velo_4(float n, float zv, float z2)
{
    float zt = n * zv + z2;

    printf("%.2f)\n", zt);
}

int main(int ac, char **av)
{
    int arg;
    float xv;
    float yv;
    float zv;

    arg = display_descrip(av[1]);
    if (arg == 1)
        return (0);
    if (ac != 8)
        return (return_arg());
    xv = atof(av[4]) - atof(av[1]);
    yv = atof(av[5]) - atof(av[2]);
    zv = atof(av[6]) - atof(av[3]);
    calc_velo_1(xv, yv, zv);
    calc_velo_2(atof(av[7]), xv, atof(av[4]));
    calc_velo_3(atof(av[7]), yv, atof(av[5]));
    calc_velo_4(atof(av[7]), zv, atof(av[6]));
    calc_angle(xv, yv, zv);
    return (0);
}