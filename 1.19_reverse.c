#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char s[]);

main()
{
	int len;
	char line[MAXLINE];

	while((len = getline(line, MAXLINE)) > 0){
		reverse(line);
		printf("%s", line);
	}	
	return 0;
}

int getline (char s[], int lim)
{
	int c, i;
	for (i = 0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse (char s[])
{
	int i = 0;
	int j = 0;
	char k;

	for (i = 0; s[i] != '\n'; i++);
	i--;

	for (j = 0; j < i; j++,i--){
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}