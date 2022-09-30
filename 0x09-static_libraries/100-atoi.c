#include "main.h"

/**
 * _atoi - converts strings to int
 * @s: first parameter
 *
 * Description: takes all types of char
 * Return: 0 for success
 */

int _atoi(char *s) 
{ 
	int result, m, c;

	result = 0;
	m = 1; 
	c = 0; 
	if (s[0] == '-') { 
		m = -1; 

		c++; 
	} 
	for (; s[c] != '\0'; ++c)
	{
		result = result * 10 + s[c] - '0'; 
	}
	return (c* result); 
}
