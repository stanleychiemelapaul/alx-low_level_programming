#include "main.h"

/**
* cap_string - a function that capitalizes all words of a string
* @n: input string
* Return: caps on first letter of a separator
*/
char *cap_string(char *n)
{
	int i, x;
	
	int cap = 32;

	int separators[] = {',', ';', '.', '?''(', ')', '{', '}', ' ', '\n', '\t'};

