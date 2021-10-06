/*
 * File - print_strcpy.c
 * Authors: Waython Yesse
 *      and Damiano Semufali
 */

#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - Copies information from each element
 * @dest: destination file
 * @src: source file
 * Return: array
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = src[x];
	return (dest);
}
