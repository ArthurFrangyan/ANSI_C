#include <stdio.h>
#define MAXLINE 1000
#define n 20
#define m 8

int getline(char line[], int maxline);
void remove_(char [], char [], int, int);
int detab (char[]);

main()
{
	int len, lenx;
	char line[MAXLINE];
	char line_n[n+2];

	while(getline(line, MAXLINE) > 0){
		len = detab(line);
		lenx = 1;
		while(lenx*n < len){
			remove_(line_n, line, (lenx-1)*n, lenx*n-1);
			printf("%s", line_n);
			++lenx;
		}
		if (len>(lenx-1)*n+1){	
			remove_(line_n, line, (lenx-1)*n, len);
			printf("%s", line_n);
		}
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
void remove_ (char to[], char from[], int lower, int upper)
{
	int i;
	for(i = upper-2; i>=lower; i--){
		if(from[i] == ' '){
			--upper;
		}else{
			i= -1;
		}
	}
	for (i =lower; from[i]==' ' && i<upper-2; ++i){
		++lower;
	}

	for (i = upper; i >= lower; --i){
		to[i-lower] = from[i];
	}

	if(upper == lower+1){
		to[0] = '\0';
	}else{
		to[upper-lower+2] = '\0';
		to[upper-lower+1] = '\n';
	}
}
int detab (char line[])
{
	int i, c ,f, k, s;
	char l[MAXLINE];

	k = f = s = 0;
	while((c =line[s]) != EOF && c!='\0'){
		if(c == '\t'){
			for(i = 0; i<(m-f); ++i){
				l[k] = ' ';
				++k;
			}
			f = 0;
		}
		else{
			l[k] = c;
			++k;
			++f;
		}
		++s;
		if (f>=m)
			f = f - m;
		if(c == '\n')
			f = 0;
	}
	l[k] = '\0';
	for (i = 0; i<=k; ++i){
		line[i] = l[i];
	}
	return k;
}