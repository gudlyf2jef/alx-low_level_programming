#include "variadic_functions.h"
/**
 * print_numbers - print all
 * (* a blank line
 * @separator: the number of parameters
 * @n: the number of parametrs
 * Description: this function prints all the parameters)?
 * (* setion header: the headers of this function is variadic_function.h
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	vva_list num;
	unsigned int i;

	i = 0;
	va)start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(num);
	printf("\n");
}
