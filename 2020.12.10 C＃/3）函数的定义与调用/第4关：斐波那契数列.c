#include <stdio.h>

void main()
{	
	/**********   Begin  **********/
    int fib(int a);
    int i;
    scanf("%d",&i);
    printf("fib = %d",fib(i));


	/**********   End  **********/
}

int fib(int a)
{
    if (a>=3)
    {
        return fib(a-2)+fib(a-1);
    }

    if (a<3 && a>0)
    {
        return 1;
    }
}
