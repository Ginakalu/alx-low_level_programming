#include "main.h"
<<<<<<< HEAD
/**
* main - print _putchar.
*
* Return: success always.
*/
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;
sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz ; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
=======

/**
* main - prints _putchar
*
* Description: prints _putchar
*
* Return: 0 (Success)
*/

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar('text[i]);
	}
	_putchar('\n');

	return (0);
>>>>>>> 185aa249721fdf3edde3d775524492d00659132f
}
