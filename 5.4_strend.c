int strend(char *s, char *t)
{
	char * i, *j;
	i = s;
	j = t;
	while (*s != '\0')
		s++;
	while (*t != '\0')
		t++;
	while (s>=i && t>=j && *s-- == *t--)
		;
	t++;
	if(t == j)
		return 1;
	else
		return 0;
}
#include <stdio.h>
int main()
{
	char s[10] = "123445666";
	char *t = "5666";
	printf("%d", strend(s,t));
	return 0;
}