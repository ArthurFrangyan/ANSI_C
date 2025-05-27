#include <stdio.h>

/* invert n bit from position p in x */
unsigned invert(unsigned x, unsigned p, unsigned n)
{
	return x ^ (~(~0 << n) << (p+1-n));
}

int main(void)
{
	printf("%u\n", invert(7, 1, 2));
	return 0;
}