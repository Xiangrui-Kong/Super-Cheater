///包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘输出菱形’的代码
    /*****************Begin******************/
    int x, z, i, j, k, zz;
    scanf_s("%d", &x);
    
    if (x == 0)
        return 0;
    else 
        while (x % 2 == 0)
        {
            printf("输入奇数，打印沙漏，输入0，退出程序\n");
            scanf_s("%d", &x);
        }
         if (x == 0)
             return 0;
         else if (x % 2 != 0)
         {
             z = 1;
             zz = 2 * x - 3;

             for (i = 1; i < x; i++)
             {
                 for (j = 1; j <= z; j++)
                 {
                     printf(" ");
                 }

                 if (z < x - 1)
                 {
                     z++;
                 }

                 for (k = 1; k <= zz; k++)
                 {
                     printf("*");
                 }

                 if (zz > 1)
                 {
                     zz--;
                     zz--;
                 }
                 printf("\n");
             }


             z = x;
             zz = 3;

             for (i = 2; i < x; i++)
             {
                 for (j = 2; j < z; j++)
                 {
                     printf(" ");

                 }
                 z--;


                 for (k = 1; k <= zz; k++)
                 {
                     printf("*");
                 }

                 if (zz < 2 * x - 1)
                 {
                     zz++;
                     zz++;
                 }

                 printf("\n");
             }

         }

   


    /***************** End ******************/
    return 0;
}
