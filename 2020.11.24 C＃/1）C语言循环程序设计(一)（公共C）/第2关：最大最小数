#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max,min,x;
    printf("请输入一组非负数，以0或负数结束：\n");

    /********************Begin******************/
    max=-1;
    min=99999;
    int i,k;
    float s[300];
    for (i=0;i<299;i++)
    {
        scanf("%f",&x);
        if (x>0)
        {s[i]=x;
        k=i;
        }
        else
        {k=i;
        break;
        }
    }

    for (i=0;i<k;i++)
    {
        if (s[i]>max)
        max=s[i];
        if (s[i]<min)
        min=s[i];

    }

   /*******************End********************/

    printf("最小值:%.2f\n",min);
    printf("最大值:%.2f\n",max);
    return 0;
}
