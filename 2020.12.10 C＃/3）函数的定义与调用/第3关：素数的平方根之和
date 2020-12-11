#include  <math.h>
#include <stdio.h>

double fun(int n)
{
	/**********   Begin  **********/
	int i,j,flag;
    double sum=0;

    
        for(i=3;i<n;i++)
        {
            flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                flag=1;
                }
            }

            if (flag==0)
             {
             sum=sum+sqrt(i);
             }
        }
 
    

return sum;
	/**********   End  **********/
}

int main()
{	
	int n;  
	double  sum;
	scanf("%d",&n);
	sum=fun(n);
	printf("sum=%f",sum);
	return 0;
}
