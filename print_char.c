/*
 * File - print_char.c
 * Authors: Waython Yesse
 *      and Damiano Semufali
 */

#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_d - gets length to put in _itos
 * @list: takes arg
 * Return: integar string
 **/
char *print_d(va_list list)
{
	int length, div, n, temp;

	n = va_arg(list, int);
	temp = n;
	length = 0;
	div = 1;

	if (n == 0) /* account for 0 having length 1 */
	{
		length++;
		return (_itos(div, length, n));
	}

	while (temp != 0) /* find multiple of ten to divide */
	{
		length += 1;
		if (length > 1)
			div *= 10;
		temp /= 10;
	}

	return (_itos(div, length, n));
}

/**
 * print_c - returns char as string
 * @list: char
 * Return: String verion of char
 */
char *print_c(va_list list)
{
	char *s;
	char c;

	c = va_arg(list, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';

	return (s);
}
