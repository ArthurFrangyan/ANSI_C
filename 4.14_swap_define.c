#include <stdio.h>

#define a 10

#define swap(t,x,y) {\
	t i = x;\
	x = y;\
	y = i;\
}

int main()
{
	int x = 1, y =2;
	swap(int,x,y)
	printf("x=%d\ny=%d",x,y);
	return 0;
}