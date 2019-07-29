#include "variadic_functions.h"

/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char(va_list list)
{
	printf("%c", va_arg(list,  int));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
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
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void print_all(const char * const format, ...)
{
	int i;
	int j = 0;
	char *separator = "";

	va_list list;

	va_start(list, format);

	op_t f_ops[] = {
		{"c" , op_char},
		{"i" , op_int},
		{"f" , op_float},
		{"s" , op_char_ptr},
		{NULL, NULL}
	};
	i = 0;
	while (format[i] && format)
	{
		/*printf("%d i",i);*/
		while (f_ops[j].c)
		{
			/*printf("%d j",j);*/

			if (*f_ops[j].c == format[j])
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

