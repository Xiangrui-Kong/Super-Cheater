#include<stdio.h>
int main()
{
	int a,b,c,d,t;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	/********** Begin **********/
    if (a<b)
    {
        t=b;
        b=a;
        a=t;
    }

    if (a<c)
    {
      t=c;
      c=a;
      a=t;
     
    }

    if (a<d)
    {
      t=d;
      d=a;
      a=t;  
    }

    printf("max=%d",a);
    /********** End **********/
	return 0;
}
