#include <stdio.h>
#include <float.h>
#include <limits.h>

main()
{
	printf("signed char min=%d, signed char max=%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char max=%d\n", UCHAR_MAX);
	printf("signed short min=%d, signed short max=%d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short max=%d\n", USHRT_MAX);
	printf("signed int min=%d, signed int max=%d\n", INT_MIN, INT_MAX);
	printf("unsigned int max=%d\n", UINT_MAX);
	printf("signed long min=%d, signed long max=%d\n", LONG_MIN, LONG_MAX);
	printf("unsigned long max=%d\n", ULONG_MAX);
	system("pause");
	return 0;
}