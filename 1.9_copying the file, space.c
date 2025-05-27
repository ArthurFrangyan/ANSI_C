#include <stdio.h>
#define IN 1 /*space in*/
#define OUT 0 /*space out*/
main()
{
	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF){
		if(c != ' '){
			putchar(c);
			state = OUT;
		}
		else if (state == OUT){
			putchar(c);
			state = IN;
		}
	}
}