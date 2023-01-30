#include "../main.h"
#include <stdio.h>

int main(void)
{
	_printf("hello %c %% %s  world\n", 'h', "please");
	// printf("hello %c %% %s world\n", 'h', "please");

	// testing integer
	_printf("%d\n", 2060);
	// printf("%d\n", 2060);

	return (0);
}
