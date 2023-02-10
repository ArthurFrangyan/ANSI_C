#include <stdio.h>

#define m 8

main()
{
	int i, c ,n;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			for(i = 0; i<(m-n); ++i)
				putchar(' ');
			n = 0;
		}
		else{
			putchar(c);
			++n;
		}
		if (n>=m)
			n = n - m;
		if(c == '\n')
			n = 0;
	}
}