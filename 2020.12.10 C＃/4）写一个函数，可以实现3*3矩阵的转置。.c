#include <stdio.h>

int fun(int a[3][3])
{
	int* p1 = a[0];
	int* p2 = a[1];
	int* p3 = a[2];
	int i, t, j;

	for (i = 0, j = 2;i < 3;i++, j--)
	{
		t = *(p1 + i);
		*(p1 + i) = *(p3 + j);
		*(p3 + j) = t;
	}

	t = *p2;
	*p2 = *(p2 + 2);
	*(p2 + 2) = t;
	return t;
}


int main()
{
	int a[3][3];
	int i, j;

	printf("请输入：\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	fun(a);

	printf("输出结果：\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

