#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, i, state;
	int x[10];

	i = -1;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
				state = OUT;
		else if (state == OUT) {
			state = IN;
			++i;
			x[i] = 1;
		}else {
			++x[i];
		}
	}
	printf("Count Word %d\n", i+1);
	int f;
	for(f = 0; f <= i; ++f)
		printf("%d\n", x[f]);
}