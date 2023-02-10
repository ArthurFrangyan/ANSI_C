#include <stdio.h>

#define MAXLINE 1000

void expand (char s1[], char s2[]);

int main()
{
	char s1[MAXLINE], s2[MAXLINE];
	unsigned i = 0;
	while((s1[i++] = getchar()) != EOF);
	s1[--i] = '\0';
	expand(s1,s2);
	printf("%s", s2);
	return 0;
}
void expand (char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	char k;
	while (s1[i] != '\0')
		if (s1[i+1] == '-' && s1[i+2] != '\0'){
			if (s1[i] < s1[i+2])
				for (k = s1[i]; k<s1[i+2]; k++)
					s2[j++] = k;
			else
				for (k = s1[i]; k>s1[i+2]; k--)
					s2[j++] = k;
			i += 2;
		}
		else
			s2[j++] = s1[i++];
	s2[j] = '\0';
}