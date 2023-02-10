#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
int remove_(char [], int);
void reverse(char to[], char from[], int f);

main()
{
	int len;
	char line[MAXLINE];
	char reverseline[MAXLINE];

	while((len = getline(line, MAXLINE)) > 0){
		len = remove_(line, len);
		reverse(reverseline,line,len);
		printf("%s", reverseline);
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
int remove_ (char line[], int len)
{
	int i;
	for(i = len-2; i>=0; i--){
		if(line[i]=='\t' || line[i] == ' '){
			--len;
		}else{
			i= -1;
		}
	}
	if(len == 1){
		line[0] = '\0';
	}else{
		line[len] = '\0';
		line[len-1] = '\n';
	}
	return len;
}
void reverse (char to[], char from [] , int f)
{
	int i;

	i = 0;
	while (i<=f-2){
		to[f-i-2] = from[i]; 
		++i;
	}
	if(f == 1){
		to[0] = '\0';
	}else{
		to[f] = '\0';
		to[f-1] = '\n';
	}
}