#include <stdio.h>

int lower(int c);
int htoi(char s[]);

int main(){
	int n;
	char s[] = "0xb1A\0";/*b1a*/
	int i=0;
	while((s[i]=getchar())!='\n'){
		++i;
	}
	s[i]='\0';
	n = htoi(s);
	printf("%x", n);

	return 0;
}
int htoi(char s[])
{
	int i = 0;
	int answer = 0;
	int valid = 1;
	char hex_a_f;

	if(s[0]=='0' && (s[1]=='x'|| s[1]=='X'))
		i+=2;
	else
		valid = 0;

	while(valid && s[i] != '\0'){
		answer *= 16;
		if(s[i]>='0' && s[i]<='9')
			answer+=s[i]-'0';
		else{
			hex_a_f=lower(s[i]);
			if(hex_a_f>='a' && hex_a_f<='f')
				answer+= 10+hex_a_f-'a';
			else
				valid = 0;
		}
		++i;
	}
	if(!valid){
		printf("The string isn't valid hex numbern");
		answer = 0;
	}

	return answer;
}
int lower(int c)
{
	return (c >= 'A' && c <='Z') ? c +'a'-'A' : c;
}
