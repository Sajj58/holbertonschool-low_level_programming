#include <stdio.h>
#include <stdarg.h>
#include "variadict_fuctions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)

{
	va_list args;
	va_start (n , args);
		for ( i = 0 , i < n ; i++);
		{
			resultat = resultat + va_arg (args , unsigned int);
}
