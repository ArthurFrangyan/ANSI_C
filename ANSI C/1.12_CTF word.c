#include <stdio.h>

#define OUT 0
#define IN  1

main()
{
	int c;
	int state = OUT;
	while ((c = getchar()) != EOF){
		if(c == ' ' || c == '\t'){
			if(state == OUT){
				printf("\n");
				state = IN;
			}
		}
		else{
			putchar(c);
			state = OUT;
		}
	}
}