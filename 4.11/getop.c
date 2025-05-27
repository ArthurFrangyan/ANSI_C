#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[])
{
	int i, c;
	static int ungetch = 0;
	if(ungetch == 0)
		c = getch();
	else
	{
		c = ungetch;
		ungetch = 0;
	}
	while ((s[0] = c) == ' ' || c == '\t')
		c=getch();

	s[1] = '\0';
	if(!isdigit(c) && c!= '.')
		return c;
	i = 0;

	if(c == '-')
		s[++i] = c = getch();
	if(!(isdigit(c) || c == '.'))
	{
		ungetch = c;
		return s[0];
	}

	if (isdigit(c))
		while(isdigit(s[++i] = c = getch()));
	if(c == '.')
		while(isdigit(s[++i] = c= getch()));
	s[i] = '\0';
	if(c!= EOF)
		ungetch = c;
	return NUMBER;
}