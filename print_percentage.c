/*
 * File - print_percentage.c
 * Authors: Waython Yesse
 *      and Damiano Semufali
 */

#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* printPercent - Prints a percent sign.
* @obj: the list of arguments.
* Return: +1 character.
*/
int printPercent(__attribute__((unused))va_list obj)
{
_putchar('%');
return (1);
}
