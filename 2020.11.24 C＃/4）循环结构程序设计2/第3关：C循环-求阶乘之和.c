#include <stdio.h>
#include <math.h>
	int main(void)
	{  
	  /*********Begin*********/
      int x,i,sum=0;
	  int low(int a);
	  scanf("%d",&x);
      for (i=1;i<=x;i++)
      {
          sum=sum+low(i);
      }
      printf("%d",sum);
	  /*********End**********/ 
       return 0;
	}

int low(int a)
{
int aa,aaa;
aaa=1;
for(aa=1;aa<=a;aa++)
{
    aaa=aaa*aa;
}
return aaa;
}
