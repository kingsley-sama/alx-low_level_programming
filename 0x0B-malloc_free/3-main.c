#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
char *argsto()
{
    int w;
    char *name = "this days the enemies are always here";
    int i = 0;
    do{
	    if(name[i] == ' ')
	    {
		    
	    }
	    else
	    {

		    putchar(name[i]);
	
	    }
	    i++;
    }while (name[i] != '\0');
    return (name);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	argsto();
	return 0;
}
