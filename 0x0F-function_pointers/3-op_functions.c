#include "3-calc.h"

/**
 * op_add - adds two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: Added result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: Subtracted result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two parameters
 * @a: first parameter
 * @b: second parameter
 * Return: Multiplied result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides using the two parameters
 * @a: first parameters
 * @b: second parameter
 * Return: Result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of a divided number
 * @a: first parameter
 * @b: second parameter
 * Return: The remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
