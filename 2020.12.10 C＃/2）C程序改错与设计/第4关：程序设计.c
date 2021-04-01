#include <stdio.h>  

int fun(int n)
{
	/********** Begin **********/
return (n/1000)*(n/1000)*(n/1000)+((n%1000)/100)*((n%1000)/100)*((n%1000)/100)+((n%100)/10)*((n%100)/10)*((n%100)/10)+(n%10)*(n%10)*(n%10);
	/**********  End  **********/
}

int main()
{
    int n,k;
    scanf("%d",&n);
    k=fun(n);
    printf("k=%d",k);
    return 0;
}
