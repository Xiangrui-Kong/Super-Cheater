#include <stdio.h>
int main()
{
	int a[10];
	int i;
	void swap(int* p,int  n);
	for (i = 0; i < 10; i++)
	{
	scanf_s("%d", &a[i]);
	}
	
	swap(a, 10);
	for (i = 0; i < 10; i++)
	printf("%d ", a[i]);

	printf("\n");
	return 0;
}

void swap(int* p, int n)
{
	int i, * max, * min,t;
	max = p;
	min = p;

	for (i = 0; i < 10; i++, p++)
	{
		if (*p > *max)
		{
			max = p;
		}
		else if (*p < *min)
		{
			min = p;
		}
	}
	t = *min;
	*min=*(p-10);
	*(p - 10) = t;

	t = *max;
	*max = *(p - 1);
	*(p - 1) = t;
}
