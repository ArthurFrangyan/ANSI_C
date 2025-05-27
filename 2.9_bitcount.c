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
	int b=0;
	while(x)
	{
		x &= x-1;
		b++;
	}
	return b;
}