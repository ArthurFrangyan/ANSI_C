#include <stdio.h>

main()
{
	int c, ns,nt,nl;
	ns = nt = nl = 0;//space tab line
	while ((c = getchar()) != EOF){
		if (c == ' ')
			++ns;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("%d\tCount Space\n%d\tCount Tabulation\n%d\tCount line\n",ns,nt,nl);
}