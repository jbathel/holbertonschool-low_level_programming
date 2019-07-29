#include "variadic_functions.h"

/**
 * op_char - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list,  int));
}
/**
 * op_int - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * op_float - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * op_char_ptr - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_char_ptr(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * get_op_func - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i;
	int j = 0;
	char *separator = "";

	va_list list;

	op_t f_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_char_ptr},
		{NULL, NULL}
	};
	i = 0;

	va_start(list, format);

	while (format[i] && format)
	{
		while (f_ops[j].c)
		{
			if (*f_ops[j].c == format[i])
			{
				printf("%s", separator);
				f_ops[j].ch(list);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}

