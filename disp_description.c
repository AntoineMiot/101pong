/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** affichage de la description des arguments a entrer
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int return_arg(void)
{
    printf("Invalid input in argument.\n");
    return (84);
}

int display_descrip(char const *str)
{
    if (str[0] == '-' && str[1] == 'h') {
        printf("USAGE\n      ./101pong x0 y0 z0 x1 y1 z1 n\n\nDESCRIPTION\n");
        printf("      x0 ball abscissa at time t -1\n");
        printf("      y0 ball ordinate at time t -1\n");
        printf("      z0 ball altitude at time t -1\n");
        printf("      x1 ball abscissa at time t\n");
        printf("      y1 ball ordinate at time t\n");
        printf("      z1 ball altitude at time t\n");
        printf("      n time shift (greater than or");
        printf("equal to zero, integer)\n");
        return (1);
    }
    return (0);
}

void calc_angle(float xv, float yv, float zv)
{
    float scalaire_vec = zv / sqrtf(powf(xv, 2) + powf(yv, 2) + powf(zv, 2));
    float angle = 180 / M_PI * asin(scalaire_vec);
    if (angle < 0)
        angle = angle * -1;
    if (xv < 0) {
        printf("The incidence angle is:\n%.2f degrees\n", angle);
    } else
        printf("The ball won’t reach the bat.\n");
}