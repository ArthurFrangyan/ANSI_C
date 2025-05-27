#include <stdio.h>

int rand (void);

int main()
{
	return 0;
}

int atoi (char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}