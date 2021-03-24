//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘输出菱形’的代码
    /*****************Begin******************/
      int x, z, i, j,k,zz;
        scanf("%d", &x);
        z = x;
        zz=1;
    
     for (i = 1; i <= x; i++)
     {
        for (j = 1; j < z; j++)
        {
            printf(" ");

        }
        z--;
        
         
        for(k=1;k<=zz;k++)
        {
            printf("*");
        }
        
        if(zz<2*x-1)
        {
            zz++;
            zz++;
        }

        printf("\n");
     }

        z=1;
        zz=2*x-3;

        for (i = 1; i < x; i++)
        {
            for (j = 1; j <=z; j++)
            {
            printf(" ");
            }

            if(z<x-1)
            {
                z++;
            }
           
            for (k=1;k<=zz;k++)
            {
                printf("*");
            }

            if(zz>1)
            {
                zz--;
                zz--;
            }
            printf("\n");
        }




    /***************** End ******************/
    return 0;
}
