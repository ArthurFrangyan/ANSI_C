static int F;
static int i;

static void itoa_f(int n, char c[], int f)
{
	F = f;
	int f1;
	if (n<0)
	{
		c[f++] = '-';
		n = -n;
	}
	if(n/10)
		itoa_f(n/10, c, f+1);
	c[i++] = n % 10 + '0';
}

void itoa(int n, char c[])
{
	i = 0;
	itoa_f(n,c,0);
	c[F+1] = '\0';
}

#include <stdio.h>

int main()
{
	int a = 1230;
	char c[100];
	itoa(a,c);
	printf("%s", c);
	return 0;
}