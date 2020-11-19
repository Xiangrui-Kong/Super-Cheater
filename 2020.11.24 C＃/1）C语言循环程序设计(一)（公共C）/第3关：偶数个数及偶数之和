#include <stdio.h>
#include <stdlib.h>

int main()
{

    /****************Beign****************/
    int i,k,x,c=0,sum=0;
    int s[300];
    printf("请输入一组正整数，以0或者负数结束:");
    for (i=0;i<299;i++)
    {
        scanf("%d",&x);
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
        if (s[i]%2==0)
        {
            sum=sum+s[i];
            c++;
        }

    }

    printf("\nsum = %d,count = %d",sum,c);

    /***************End******************/
    return 0;
}
