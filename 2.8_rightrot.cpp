#include <stdio.h>

int countbits(unsigned x)
{
    int count;
    for(count=1; x>=2; count++)
        x/=2;
    return count;
}

unsigned rightrot(unsigned x, unsigned n)
{
	int rotbits, bitscount;
	bitscount = countbits(x)-1;

	while(n--)
	{
		rotbits = x & 1;
		x = x >> 1;
		x = x | (rotbits<<bitscount);
	}

	return x;
}
int main(void)
{
    unsigned int x;
    int n;
    
    printf("Enter the number:\nx: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    printf("%d\n", rightrot(x, n));
    return 0;
}
