#include <stdio.h>

/**
*main - prints the name of
*the file it was compiled from
*
*Return: nothing to be returned
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
0x0D-preprocessor $ cat 3-function_like_macro.h
#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) (((x) < (0)) ? ((x) * (-1)) : (x))

#endif
