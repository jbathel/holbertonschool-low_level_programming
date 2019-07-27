#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything.
 * Return: 0
 */
/**
 *
 */
void op_char(va_list printAll)
{
	printf("%c", va_arg(printAll, int));
}
	/**
	 *
	 */
void op_int(va_list printAll)
{
	printf("%d", va_arg(printAll, int));
}
	/**
	 *
	 */
void op_float(va_list printAll)
{
	printf("%f", va_arg(printAll, double));
}
	/**
	 *
	 */
void op_char_ptr(va_list printAll)
{
	printf("%s", va_arg(printAll, char *));
}
	/**
	 *
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
				f_ops[j].ch(printAll);

			}
		}
	}

}
