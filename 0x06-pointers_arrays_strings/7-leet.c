#include <stdio.h>
#include <string.h>

/**
 * leet - function that encodes a string into leet speak
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int index1 = -1, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}
