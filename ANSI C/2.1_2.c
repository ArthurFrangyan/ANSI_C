#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*медленно*/
	int j; /*// Определяем переменную сравнения*/
	signed char sc_i;
	for (sc_i=1, j=0; sc_i==j+1; sc_i++, j++);
	printf("signed char max=%d, ", j);
	for (sc_i=-1, j=0; sc_i==j-1; sc_i--, j--);
	printf("signed char min=%d\n", j);
	unsigned char uc_i;
	for (uc_i=1, j=0; uc_i==j+1; uc_i++, j++);
	 printf ("unsigned char max =% u \n", j); /*// Обратите внимание, что формат вывода беззнаковых символов -% u*/
	signed short ss_i;
	for (ss_i=1, j=0; ss_i==j+1; ss_i++, j++);
	printf("signed short max=%d, ", j);
	for (ss_i=-1, j=0; ss_i==j-1; ss_i--, j--);
	printf("signed short min=%d\n", j);
	unsigned short us_i;
	for (us_i=1, j=0; us_i==j+1; us_i++, j++);
	 printf ("unsigned short max =% u \n", j); /*// Обратите внимание, что формат короткого вывода без знака равен% u*/
	 /* Обратите внимание, что в случае int и long диапазон положительных значений без знака превышает диапазон значений со знаком, поэтому при определении переменных без знака
	 Для переопределения беззнаковой переменной контраста */
	signed int si_i;
	for (si_i=1, j=0; si_i>j; si_i++, j++);
	printf("signed int max=%d, ", j);
	for (si_i=-1, j=0; si_i<j; si_i--, j--);
	printf("signed int min=%d\n", j);
	unsigned int ui_i, k;
	for (ui_i=1, k=0; ui_i>k; ui_i++, k++);
	 printf ("unsigned int max =% u \n", k); /*// Обратите внимание, что формат вывода без знака -% u*/
	signed long sl_i;
	for (sl_i=1, j=0; sl_i>j; sl_i++, j++);
	printf("signed long max=%d, ", j);
	for (sl_i=-1, j=0; sl_i<j; sl_i--, j--);
	printf("signed long min=%d\n", j);
	unsigned long ul_i, m;
	for (ul_i=1, m=0; ul_i>m; ul_i++, m++);
	 printf ("unsigned long max =% u \n", m); /*// Обратите внимание, что формат вывода без знака -% u*/
	system("pause");
	return 0;
}