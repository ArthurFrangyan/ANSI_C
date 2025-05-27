#include <stdio.h>

main()
{
	int fahr, celsius;/*celsius - fahr*/
	int lower, upper, step;
	lower = -10;
	upper = 300;
	step = 10;
	celsius = lower;
    while (fahr <= upper) 
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}