#include <stdio.h>
#include <string.h>

/**
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
*Assumes that strings are never empty and
*that numbers will always be positive, or 0.
*Assumes there are only digits stored in the number strings.
*If result can be stored in the buffer,
*returns a pointer to the result.
*If result cannot be stored in the buffer, returns `0`.
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j, k;

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 ||
			j >= 0 || carry; i--, j--, k++)
	{
		int num1 = (i >= 0) ? (n1[i] - '0') : 0;
		int num2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		if (k >= size_r - 1)
		{
			r[size_r - 1] = '\0';
			return (0);
		}
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];

		r[j] = temp;
	}

	r[k] = '\0';
	return (r);
}
