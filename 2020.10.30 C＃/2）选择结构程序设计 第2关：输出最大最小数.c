/********** Begin **********/
#include <stdio.h>
int main()
{int a,b,c,max,min;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b)
{max=a;
}
else max=b;


if(max<c)
max=c;

if(a>b)
{min=b;
}
else min=a;


if(min>c)
min=c;




printf("max = %d\n",max);
printf("min = %d",min);
return 0;

}



/********** End **********/
