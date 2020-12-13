#include <stdio.h>
int main()
{
	char a[1000];
	int n;
	void print(char *p,int x);
	printf("请输入字符串:");
	scanf_s("%s", a, 999);
	printf("请输入从第几个开始截取:");
	scanf_s("%d", &n);
	print(a,n);
	return 0;
}

void print(char* p, int x)
{
	int i;
	for (i = *(p + x);  *(p + x) != '\0';x++ )
	{
		printf("%c", *(p + x));
	}

}
