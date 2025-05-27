#include <stdio.h>

int main()
{
	printf("\n# Backspace\n");
	printf("123456");
	printf("\b789\n");

	printf("\n# Carriage return\n");
	printf("Carriage return");
	printf("\r");
	printf("---\n");
	printf("new Line\n");

	printf("\n# Octal and Hexadicmal numbers\n");
	printf("\\x2a\n");
	printf("\x2a\n");
	printf("\\53\n");
	printf("\53\n");
	
	printf("# Horisontal Tab\n");
	printf("|\t|\n");
	
	printf("# Vertical Tab\n");
	printf("|\v\r|||||3\b\b\v\b|\v\b|\v|\n");


	printf("\n# \\?\n");

	printf("??/x2a\n");

	printf("\n# alert(bell) character\n");
	/*printf("\a");*/
	printf("\007");
	return 0;
}