#include <stdio.h>

main()
{
	int fahr, celsius;/*celsius - fahr*/
	int lower, upper, step;
	lower = -10;
	upper = 300;
	step = 10;
	celsius = lower;
    printf("Cels\tFahr\n------------\n");
	while (celsius<=upper)
	{
		fahr = (9.0/5.0)*celsius+32.0;
		printf("%3d\t%6d\n", celsius, fahr);
			celsius = celsius+step;
	}
}