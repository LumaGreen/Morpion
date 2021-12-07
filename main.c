#include<stdio.h>
#include<stdlib.h>

#define WIDTH 3
#define HEIGHT 3

void ft_display_grid(void);

int main(void)
{
    ft_display_grid();

    return 0;
}

void ft_display_grid(void)
{   
    int i = 0;
    int j = 0;

    int nb_row = 1;
    int nb_column = 0;

    for (nb_column = 1; nb_column < WIDTH+1; nb_column++)
    {
        printf("  %d ", nb_column);
    }
    for (j = 0; j < HEIGHT; j++)
    {
        printf("\n");
        for (i = 0; i < HEIGHT ; i++)
                printf("+---");
        printf("+\n");
        for (i = 0; i < WIDTH; i++)
        {
        printf("|   ");
        }
        printf("|");
        printf(" %d", nb_row);
        nb_row++;  
    }
        printf("\n");
            for (i = 0; i < WIDTH; i++)
                printf("+---");
            printf("+\n");
}

