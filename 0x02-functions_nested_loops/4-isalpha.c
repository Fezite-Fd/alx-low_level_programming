#include "main.h"

/**
* _isalpha - check the code for ALX School students.
* @c: is c an integer argument
* Return: Always 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
