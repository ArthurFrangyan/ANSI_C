#include <stdio.h>

float fahr(int fahr);

main()
{
	int i;
	i = 20;
	for(i; i <= 300; i=i+20)
		printf("%3d%6.1f\n", i, fahr(i));
	return 0;
}

float fahr(int fahr) 
{
	return (5.0/9.0)*(fahr-32);
}