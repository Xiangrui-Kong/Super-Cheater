#include <stdio.h>
int main()
{
	int a, b, c, t;                      //定义4个基本整型变量a,b,c,t;
    printf("请输入三个整数:");
	scanf("%d%d%d", &a, &b, &c);
	//如果a大于b，借助中间变量t实现a、b值互换；
	if (a > c)
	{
		t = a;
		a = b;
		b = t;
	}
	//如果a大于c，借助中间变量t实现a、c值互换；
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	//如果b大于c，借助中间变量t实现b、c值互换；
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
    }
    printf("从小到大排列为:%d,%d,%d",a,b,c);
	return 0;
}
