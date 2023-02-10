#include <stdio.h>

main()
{
	int uc;
	for(uc=1; uc>0; uc++);
	printf("min = %d\n",uc);
	printf("max = %d\n",--uc);
}