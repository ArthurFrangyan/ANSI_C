#include <stdio.h>

#define OUT 0
#define IN  1

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if(c =='\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d\tCount Line\n%d\tCount Word\n%d\tCount Char\n",nl,nw,nc);
}