#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char achar;
int aint;
long int alongint;
long long int alonglongint;
float afloat;
printf("Size of a char: %lu byte(s)\n",sizeof(achar));
printf("Size of an int: %lu byte(s)\n",sizeof(aint));
printf("Size of a long int: %lu byte(s)\n",sizeof(alongint));
printf("Size of a long long int: %lu byte(s)\n",sizeof(alonglongint));
printf("Size of a float: %lu byte(s)\n",sizeof(afloat));
return (0);
}
