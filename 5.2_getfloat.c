#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

int getfloat(double *pn)
{
	int c;
	double sign;
	while(isspace(c=getch()))
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.')
	{
		ungetch(c);
		return 0;
	}
	sign = (c=='-') ? -1 : 1;
	if(c=='+' || c=='-')
		c = getch();
	for(*pn = 0; isdigit(c); c=getch())
		*pn = 10 * *pn + (c-'0');
	if(c=='.')
	{
		c = getch();
		for(; isdigit(c); c=getch())
		{
			*pn = 10 * *pn + (c-'0');
			sign *= 10;
		}
	}

	*pn /= sign;
	if(c!=EOF)
		ungetch(c);
	return c;
}
#define BUFSIZE 100 

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch (int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters \n");
	else
		buf[bufp++] = c;
}
int main()
{
	double n;
	while(true)
	{
		getfloat(&n);
		printf("%f\n",n);
	}
	return 0;
}