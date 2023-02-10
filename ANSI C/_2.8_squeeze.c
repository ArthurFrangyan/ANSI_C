#include <stdio.h>


void squeeze(char s[], int c);

int main(){
	char c[] = "afvfa\0";
	printf("%s\n",c);
	squeeze(c,'f');
	printf("%s",c);
	return 0;
}
void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}