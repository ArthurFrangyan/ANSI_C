#include <stdio.h>
#include <limits.h>

#define MAXLINE 100

void itoa ( int n, char s[], int b);
void reverse (char s[]);
int main()
{
	char s[MAXLINE];
	int n, b;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the numeral system: ");
    scanf("%d", &b);
    itoa(n, s, b);
    printf("%s", s);
    printf("\n");
	return 0;
}
void itoa ( int n, char s[], int b)
{
	int i, sign, c;

	sign = n;
	i = 0;
	do {
    	c = abs(n % b);
    	s[i++] = (c>9) ? c+'A'-10: c + '0';
	} while ((n /= b) != 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse (char s[])
{
	int i = 0;
	int j = 0;
	char k;

	for (i = 0; s[i] != '\0'; i++);
	i--;

	for (j = 0; j < i; j++,i--){
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}