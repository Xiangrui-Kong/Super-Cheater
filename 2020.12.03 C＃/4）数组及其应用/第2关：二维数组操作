#include<stdio.h>
int main()
{
    int i, j, n, a[99][99];
    
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n;j++)
        {
          
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0;i < n;i++)
    {

        for (j = 0;j < n;j++)
       {
            if (i > j||i==j)
            {
                a[i][j] = 0;
                printf("%d ", a[i][j]);
            }
            else 
            {
                printf("%d ", a[i][j]);
            }
       }
       if(j==n)
       {
           printf("\n");
       }
    }
    return 0;
}
