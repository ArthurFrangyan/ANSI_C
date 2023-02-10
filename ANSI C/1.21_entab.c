#include <stdio.h>

#define m 8

main()
{
	int i, c ,n,k;
	n = 0;
	k = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			++k;
			if (n+k == m){
				k = 0;
				n = 0;
				putchar('\t');
			}
		}
		else if (k>0){
			while(k > 0){
				putchar(' ');
				++n;
				--k;
			}
			putchar(c);
			++n;
		}
		else{
			putchar(c);
			++n;
		}
		if (c == '\t'){
			k = 0;
			n = 0;
		}
		if (n>=m)
			n = n - m;
		if(c == '\n'){
			n = 0;
			k = 0;
		}
	}
}