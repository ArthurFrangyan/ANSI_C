#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	printf("\n"
	"# Backspace\n");
	printf("123456");
	printf("\b789\n");
	printf(" 0%%");
	int p;
	fflush(stdout);
	for (p=5; p<=100; p+=1)
	{
		Sleep(5);
		printf("\b\b\b%2d%%",p);
	}
	/*printf("\r\033[K");*/
	printf("\n");

	printf("\n"
	"# Carriage return\n");
	printf("Carriage return");
	printf("\r");
	printf("---\n");
	printf("new Line\n");

	printf("\n"
	"# Octal and Hexadicmal numbers\n");
	printf("\\x2a\n");
	printf("\x2a\n");
	printf("\\53\n");
	printf("\53\n");
	
	printf("\n"
	"# Horisontal Tab\n");
	printf("|\t|\n");
	
	printf("\n"
	"# Vertical Tab\n");
	printf(
		"|"
		"\v|"
		"\v\r|||||3"
		"\b\b\v\b|"
		"\v\b|\v|\n");


	printf("\n"
	"# \\?\n");

	printf("??/x2a\n");

	printf("\n"
	"# alert(bell) character\n");
	/*printf("\a");*/
	printf("\007");

	printf("\n"
	"# \\f - formfeed\n");
	printf("1\f23");
	
	return 0;
}