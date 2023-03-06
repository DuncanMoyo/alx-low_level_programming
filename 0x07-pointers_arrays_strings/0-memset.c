
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: returns a pointer to the memory area s
 * @b: the constant byte b that will fill the memory area
 * @n: the number of bytes that will be filled
 * Return: a pointer to the filled area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
