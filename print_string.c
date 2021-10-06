/*
 * File - print_string.c
 * Authors: Waython Yesse
 *      and Damiano Semufali
 */

#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_s - takes string and return string
 * @list: string
 * Return: string
 */
char *print_s(va_list list)
{
	char *s;
	char *p;
	int len;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
