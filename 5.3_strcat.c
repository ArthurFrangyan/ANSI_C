void strcat_my(char *s, char *t)
{
	while (*s != '\0')
		s++;
	while ((*s++ = *t++) != '\0');
}
#include <stdio.h>
int main()
{
	char s[10] = "123456";
	char *t = "789";
	strcat_my(s,t);
	printf("%s", s);
	return 0;
}