#include <stdio.h>

int binsearch (int x, int v[], int n);

int main()
{
	int v[10]= {3,5,7,8,10,15,16,17,18,19} ;
	int x = 8;
	printf("%d",binsearch(x,v,10));
	return 0;
}
int binsearch (int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n -1;
	while (low <=high){
		mid = (low+high) /2;
		if (x < v[mid])
			high  = mid -1;
		else if (x > v[mid])
			low  = mid + 1;
		else
			return mid;
	}
	return -1;
}