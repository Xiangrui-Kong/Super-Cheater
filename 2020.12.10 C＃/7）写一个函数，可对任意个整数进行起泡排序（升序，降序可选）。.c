#include <stdio.h>
#include<string.h>
void swap(int* a, int* b);

int main()
{
	int     str[99];
	int p;
	int     i, j, n;
	printf("请定义数组总数：");
	scanf_s("%d", &n);
	printf("请选择从小到大(1)或从大到小(2)：");
	scanf_s("%d", &p);
	if (p == 1)
	{
		for (i = 0; i < n; i++)
		{
			printf("请输入第%d个数：", i);
			scanf_s("%d", &str[i]);
		}

		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (str[i] > str[j])
				{
					swap(&str[i], &str[j]);
				}
			}
		}

		printf("从小到大排列为：");
		for (i = 0; i < n; i++)
			printf("%d ", str[i]);
	}
	else if(p==2)
	{
		for (i = 0; i < n; i++)
		{
			printf("请输入第%d个数：", i);
			scanf_s("%d", &str[i]);
		}

		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (str[i] < str[j])
				{
					swap(&str[i], &str[j]);
				}
			}
		}

		printf("从大到小排列为：");
		for (i = 0; i < n; i++)
			printf("%d ", str[i]);
	}
	return    0;
}
void swap(int* a, int* b)
{
	int     c;
	c = *a;
	*a = *b;
	*b = c;
}
