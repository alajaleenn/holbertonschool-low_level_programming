#include "main.h"

/**
* _isupper - checks if a character is uppercase
* @c: The character (in ASCII code) to check
* Description:
* In ASCII, uppercase letters 'A' to 'Z' are represented
* by the values 65 to 90. This function compares the
* integer value of c to that range.
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{ 
if (c > 64 && c <= 90)
return (1);
else
return (0); 
}
