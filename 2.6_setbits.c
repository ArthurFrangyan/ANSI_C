/* Exercise 2.6 from "The C programming language" book by K&R */

#include <stdio.h>

/* sets n bit from position p in x like right n bits in y */
unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y)
{
	return (x & ~(~(~0 << n) << (p+1-n))) | (y & (~(~0 << n) << (p+1-n)));
}
int main(void)
{
	printf("%u\n",setbits(0x3F, 0, 1, 0x0));
	return 0;
}
