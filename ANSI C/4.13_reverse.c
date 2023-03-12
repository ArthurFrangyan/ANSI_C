static void reverse_v(char c[], int n_0, int n_1)
{
	char k = c[n_0];
	c[n_0] = c[n_1];
	c[n_1] = k;
	if(n_0++ < n_1--)
		reverse_v(c,n_0,n_1);
}

void reverse (char c[])
{
	int i = 0;
	while(c[i++] != '\0');
	i -= 2;
	reverse_v(c,0,i);
}
#include <stdio.h>
int main()
{
	char s[1000] = "Hello world";
	char c;
	int i;
	while(true)
	{
		i = 0;
		while((c=getchar())!= '\n')
		{
			if(c == EOF)
				return 0;
			s[i++] = c;
		}
		s[i] = '\0';
		reverse(s);
		printf("%s\n", s);
	}
}