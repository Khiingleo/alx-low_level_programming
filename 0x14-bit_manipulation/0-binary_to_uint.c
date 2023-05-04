#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number if success
 *         0 if b is NULL or chars in the string that are not 0 and 1
 *
 *
 * description:
 * the code first checks if b is NULL if it is the it returns 0
 * then we calculate the length of the string and minus it by 1 to get
 * the MSB(most significant bit) or the leftmost bit
 * then using a loop;
 * we check if there are other chars other than 0 and 1, if there are
 * then we return 0
 * then we check if the ith value of b is 1, this is because to get the decimal
 * in a binary we calculate the 1s ie 110 would be
 * 2^2 + 2^1 = 6
 * then if it is we add the result to the result of 1 * (1 << length)
 * where 1 is 001 and if length is 2 then 001 << 2 = 100
 * which is 4 so 1 *4 = 4 so the result will be 4
 * then length is decremented to adjust the positional value of the next
 * binary in the sequence.
 * this is necessary because the positional value of the binary digits
 * decreases from left to right
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, length = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		length++;
	length -= 1;/*getting the MSB*/

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			result += (1 * (1 << length));
		length--;
	}

	return (result);
}


/**
 * this code can also be done another way
 * what this does is after doing the necessary checks,
 * it subtracts the ASCII value of '0' from the ASCII value of the character
 * at the 'ith' position, this will give us the decimal value at position i
 * i.e if b[i] is 1 then the result of b[i] - '0' = 1
 * next we multiply the decimal value at 'i' by the respective power of 2
 * which is stored in the variable 'power' This gives us the contribution
 * of the binary digit at position i to the overall decimal value
 * of the binary string.
 * after that we add the contribution of the binary digit to at position 'i'
 * to the 'result'
 * then we update the power to represent the next power of 2
 *
 * unsigned int binary_to_uint(const char *b)
 * {
 *	unsigned int result = 0;
 *	int i, length = 0, power = 1;
 *
 *	if (b == NULL)
 *		return (0);
 *	for (i = 0; b[i] != '\0'; i++)
 *		length++;
 *
 *	length -= 1;
 *
 *	for (i = length; i >= 0; i++)
 *	{
 *		if ((b[i] != '0') && (b[i] != '1')
 *			return (0);
 *		result += (b[i] - '0') * power;
 *		power *= 2;
 *	}
 *
 *	return (result);
 * }
 *
 *
 */
