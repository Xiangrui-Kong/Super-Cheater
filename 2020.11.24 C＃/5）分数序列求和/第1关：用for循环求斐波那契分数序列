#include <stdio.h>
int main()
{
	/********** Begin **********/
	float Fibon(float a);
    float i,sum=0;
    for(i=1;i<=20;i++)
    {
        sum=sum+Fibon(i+2)/Fibon(i+1);
    }
    printf("sum=%.2f",sum);

    /********** End **********/
	return 0;
}




float Fibon(float a)
{
	if (a == 1 || a == 2)
	{
		return 1;
	}
	else
	{
		return Fibon(a - 1) + Fibon(a - 2);
	}
}
