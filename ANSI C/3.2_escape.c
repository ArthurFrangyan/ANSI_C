#include <stdio.h>

#define MAXLINE 1000

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main(){
	char c;
	int i;
	char t[MAXLINE], s[MAXLINE] , s_2[MAXLINE];
	for(i = 0; (c = getchar()) != EOF; i++)
		t[i] = c;
	t[i] = '\0';
	escape(s,t);
	unescape(s_2,t);
	printf("%s",s);
	printf("\n\n%s",s_2);
	return 0;
}
void escape(char s[], char t[])
{
	int i, j;
	for (i = 0, j = 0; t[i] != '\0' ; i++, j++)
		switch (t[i]){
			case '\n':
				s[j] = '\\';
				s[++j] = 'n';
				break;
			case '\t':
				s[j] = '\\';
				s[++j] = 't';
				break;
			default:
				s[j] = t[i];
				break;
		}
	s[j] = '\0';
}
void unescape(char s[], char t[])
{
	int i, j;
	for (i = 0, j = 0; t[i] != '\0' ; i++, j++)
		if(t[i] == '\\')	
			switch (t[++i]){
				case 'n':
					s[j] = '\n';
					break;
				case 't':
					s[j] = '\t';
					break;
				default:
					s[j] = t[--i];
					break;
			}
		else
			s[j] = t[i];
	s[j] = '\0';
}