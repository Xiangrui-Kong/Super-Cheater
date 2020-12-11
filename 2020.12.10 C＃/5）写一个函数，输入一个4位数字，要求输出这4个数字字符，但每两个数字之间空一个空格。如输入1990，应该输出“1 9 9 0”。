#include<stdio.h>

#include<string.h>
int main()
{
	int i;
	char str[80];
	void insert(char str[]);
	printf("输入个四位数：");
	gets_s(str);
	insert(str);
	return 0;
}
void insert(char str[])
{

	int i;
	for (i = strlen(str);i > 0;i--)
	{
		str[2 * i] = str[i];
		str[2 * i - 1] = ' ';
	}
	printf("结果：\n%s\n", str);
}
