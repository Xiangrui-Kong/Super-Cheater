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

void swap(int* p,int n)
{
	int i, j,temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (*(p + j) < *(p + j + 1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}

	}

}
