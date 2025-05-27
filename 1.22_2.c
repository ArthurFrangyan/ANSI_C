#include <stdio.h>

#define MAXLINE 1000
#define n 10

int getline (char[], int);

main()
{
	int i, k, s, f, u;
	char line[MAXLINE];
	char linex[MAXLINE];
	int len;

	while ((len = getline(line, MAXLINE)) > 0){
		k = s = u = 0;
		f= 1;
		for (i = 0; i<=len && line[i] != '\0' ; ++i){
			if(line[i] == ' ' || line[i] =='\t'){
				++k;
				if (k <2){
					linex[s] = line[i];
					++s;
				}
			}
			else{
				linex[s] = line[i];
				++s;
				++u;
				k = 0;
			}
			if (i == n*f-1){
				++f;
				if (u>0){
					linex[s] = '\n';
					++s;
					u = 0;
				}
				k = 1;
			}
		}
		linex[s] = '\0';
		printf("%s", linex);
	}

}

int getline (char s[], int lim)
{
	int i, c;

	for (i = 0; i <= MAXLINE-2 && (c=getchar()) != EOF && c != '\n' ; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}