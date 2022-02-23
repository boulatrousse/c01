#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main()
{
    int tab[5] = {10, 4, 23, 2, 25};
    
    ft_sort_int_tab(tab, 5);
    //ft_rev_int_tab(tab, 5);

    return 0;
}

//----------------------------------------------------

void ft_ft(int *nbr)
{
    *nbr = 42;
}

//----------------------------------------------------

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

//----------------------------------------------------

void ft_swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

//----------------------------------------------------

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

//----------------------------------------------------

void ft_ultimate_div_mod(int *a, int *b)
{
    *a = *a / *b;
    *b = *a % *b;
}

//----------------------------------------------------

void ft_putstr(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        write(1, &str[i], 1);
    }
}

//----------------------------------------------------

int ft_strlen(char *str)
{
    int nbrCar = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
        nbrCar++;

    return nbrCar;
}

//----------------------------------------------------

void ft_rev_int_tab(int *tab, int size)
{
    int temp = 0, j = size;

    for(int i = 0; i < size; i++)
    {
        temp = tab[i];
        tab[i] = tab[j - 1];
        tab[j - 1] = temp;

        j--;
    }

    //affichage des valeurs
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }

    //test 
    // for(int i = 0; i < size - 1; i++)
    //     for(int j = i + 1; j < size; j++)
    //     {
    //             temp = tab[i];
    //             tab[i] = tab[j];
    //             tab[j] = temp;
    //     }

}

//----------------------------------------------------

void ft_sort_int_tab(int *tab, int size)
{
    int temp = 0;

    for(int i = 0; i < size - 1; i++)
        for(int j = i + 1; j < size; j++)
        {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
        }

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", tab[i]);
    }
}