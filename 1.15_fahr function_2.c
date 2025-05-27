#include <stdio.h>

void fahr(int lower, int upper, int step);

main()
{
	fahr(0, 300, 20);
	return 0;
}

void fahr(int lower, int upper, int step)
{
	int fahr = lower;
	for (fahr = lower ; fahr <= upper; fahr =fahr + step)
	{
		printf("%3d %8.2f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}