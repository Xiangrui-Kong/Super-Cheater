#include<stdio.h>
int main()
    {
    int a[11][11]; 
	int i, j;

    for(i=0;i<10;i++)
     {
       for(j=0;j<10;j++)
       {
           a[i][j]=0;
       }
     }

    for(j=0;j<10;j++)
    {
        a[j][0]=1;
    }

	for(i=1;i<10;i++)
     {
       for(j=1;j<10;j++)
       {
           a[i][j]=a[i-1][j-1]+a[i-1][j];
       }
     }
	
     for(i=0;i<10;i++)
     {
       for(j=0;j<10;j++)
       {
           if(i==j && a[i][j]!=0)
           {
             printf("%d",a[i][j]);
           }
           else if (a[i][j]!=0)
           {
               printf("%d ",a[i][j]);
           } 
       }
      printf("\n");
     }
    
 
	return 0;
    }



/*

-------------------------------以下为优化版本---------------------------------------
#include<stdio.h>
int main()
{
int i, j, a[11][11];                            
for (i = 1; i < 11; i++)                     
{
    a[i][i] = 1;                            
    a[i][1] = 1;                           
}
for (i = 3; i < 11; i++)                     
    for (j = 2; j <= i - 1; j++)                 
        a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 
for (i = 1; i < 11; i++)
{
    for (j = 1; j <= i; j++)
   {
        if(i==j)
    {
        printf("1\n");
    }
    else if(j<i)
    {
        printf("%d ",a[i][j]);
    }                 
    }
}
}
---------------------------------------------------------------------------------------
*/
