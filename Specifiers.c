#include <stdio.h>

int main()
{
	printf(
	"# zero Padding\n");
	char* str;
	sprintf(str, "%05d", 5) ;
	printf("%10s", str);

	return 0;
}
