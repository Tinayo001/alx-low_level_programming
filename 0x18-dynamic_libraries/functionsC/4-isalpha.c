#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: function parameter
* Return: 1 and 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c >= 122))
	{
		return (1);
	}
		return (0);
}
