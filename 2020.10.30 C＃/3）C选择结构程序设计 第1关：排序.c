#include <stdio.h>
int main()
{
	float a, b, c, t;                      //定义4个基本变量a,b,c,t;
	scanf("%f%f%f", &a, &b, &c);
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
    printf("%g %g %g",c,b,a);
	return 0;
}
