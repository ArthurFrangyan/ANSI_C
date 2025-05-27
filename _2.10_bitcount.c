#include <stdio.h>

int bitcount (unsigned);

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",bitcount(x));
	return 0;
}
int bitcount (unsigned x)
{
	int b;

	for (b = 0; x != 0; x >>= 1)
		if ( x& 01)
			b++;
	return b;
}