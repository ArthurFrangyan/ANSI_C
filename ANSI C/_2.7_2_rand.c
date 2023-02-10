#include <stdio.h>

unsigned long int next = 1;

int rand (void);
void strand (unsigned int seed);

int main()
{
	strand(100);
	int i;
	unsigned long int r;
	for(i = 0; i<100; i++)
	{
		r = rand();
		while(!(r==3 || r==1)) /*0 - 1*/
			r >>= 1;
		if(r==3) r=0;

		printf("%d\n",r);
		
	}
	return 0;
}

int rand (void)
{
	/*0 - 32767*/
	next += 1103515245 + 12345;
	return (unsigned int) (next/65536) %32768;
}
void strand (unsigned int seed)
{
	next  = seed;
}