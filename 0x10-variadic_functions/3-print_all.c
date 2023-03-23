#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * c: char
 * i: integer
 * f: float
 * s: char * (if the strinf is NULL, print (nil) instead)
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					printf("(nil)");
				} else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
