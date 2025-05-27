#include <stdio.h>

void qsort(int v[], int left, int right);

int main()
{
	int v[] = {5, 8, 7, 6};
	qsort(v, 0, 3);
	int i;
	for (i = 0; i < 4; ++i)
	{
		printf("%d",v[i]);
	}
	return 0;
}
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if (left >= right) 	/* do nothing if array contains */
		return; 		/* fewer than two elements */
	swap(v, left, (left + right)/2); /* move partition elem */
	last = left; /* to v[0] */
	for (i = left + 1; i <= right; i++) /* partition */
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last); /* restore partition elem */
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}