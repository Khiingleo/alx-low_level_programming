#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@num: the integer argument
 *Return: return the absolut value
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	return (0);
}
