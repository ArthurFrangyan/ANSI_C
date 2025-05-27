#include <stdio.h>

void squeeze(char a[], char b[]);
int strflen1(char s[]);

int main(){

	char s1[] = "BHiartpphdayy\0";
	printf("s1 = %s\n", s1);

	char s2[] = "Happy\0";
	printf("s2 = %s\n", s2);

	squeeze(s1,s2);
	printf("new s1 = %s\n", s1);

	return 0;
}

void squeeze(char s1[], char s2[])
{

	int i, j, k;
	int len = strlen1(s2);
	for(k=0; k<=len;k++){
		for (i = j = 0; s1[i] != '\0'; i++)
			if(s1[i] != s2[k])
				s1[j++] = s1[i];
		s1[j] = '\0';
	}
}
int strlen1(char s[])
{
	int i=0;
	while(s[i]!='\0')
		++i;
	return i;
}