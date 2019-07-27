#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * op_char - calls function
 * @printAll: parser
 * Return: 0
 */
void op_char(va_list printAll)
{
	printf("%c", va_arg(printAll, int));
}
/**
 * op_int - calls function
 * @printAll: parser
 * Return: 0
 */
void op_int(va_list printAll)
{
	printf("%d", va_arg(printAll, int));
}
/**
 * op_float - calls function
 * @printAll: parser
 * Return: 0
 */
void op_float(va_list printAll)
{
	printf("%f", va_arg(printAll, double));
}
/**
 * op_char_ptr - calls function
 * @printAll: parser
 * Return: 0
 */
void op_char_ptr(va_list printAll)
{
	printf("%s", va_arg(printAll, char *));
}
/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i, j;


	 ops f_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_char_ptr},

	};

	va_list printAll;

	va_start(printAll, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == *f_ops[j].ic)
			{
				if (j != 0)
				printf(", ");
				f_ops[j].ch(printAll);

			}
		}
	}
	printf("\n");
}
