#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define SIN '1'
#define EXP '2'
#define POW '3'

int getop(char s[]);
void push(double);
double pop(void);

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF){
		switch(type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if(op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '1':
			push(sin(pop()));
			break;
		case '2':
			push(sin(pop()));
			break;
		case '3':
			op2 = pop();
			push(pow(pop(), op2));
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("eroor: unknown command %s\n", s);
			break;
		}
	}
	return 0;
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
	if(sp<MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
	if(sp>0)
		return val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}

#include <ctype.h>
int getch (void);
void ungetch(int);

int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t');

	s[1] = '\0';
	if(!isdigit(c) && c!= '.')
	{
		if(c == 's'){
			if((c = getch()) == 'i')
			{
				if((c = getch()) == 'n')
					return SIN;
				else
				{
					ungetch(c);
					ungetch(c);
				}
			}else
				ungetch(c);
		}
		else if(c == 'e'){
			if((c = getch()) == 'x')
			{
				if((c = getch()) == 'p')
					return EXP;
				else
				{
					ungetch(c);
					ungetch(c);
				}
			}else
				ungetch(c);
		}
		else if(c == 'p'){
			if((c = getch()) == 'o')
			{
				if((c = getch()) == 'w')
					return POW;
				else
				{
					ungetch(c);
					ungetch(c);
				}
			}else
				ungetch(c);
		}

		return s[0];
	}
	i = 0;
	if (isdigit(c))
		while(isdigit(s[++i] = c = getch()));
	if(c == '.')
		while(isdigit(s[++i] = c= getch()));
	s[i] = '\0';
	if(c!= EOF)
		ungetch(c);
	return NUMBER;
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