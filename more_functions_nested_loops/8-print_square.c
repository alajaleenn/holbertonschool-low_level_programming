#include <stdio.h> 
#include "main.h"


/**
 * print_square - prints a square
 *
 * @size: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
    inti=0;
    int j;
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
      for(i=0;i<size;i++)
      {
        for(j=0;j,size;j++)
        {
            _putchar('#');
        }
        _putchar('/n')
      }
    }
}