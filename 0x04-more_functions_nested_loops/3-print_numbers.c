#include "main.h"
/**
*mul - function that multipliestwo numbers
*@a: first number
*@b: second number
*Return: returns result
*/

int mul(int a, int b)
{
return (a * b);
}
#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/
void print_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
_putchar(number);
}
_putchar(10);
}
