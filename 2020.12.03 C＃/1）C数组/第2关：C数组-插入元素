#include <stdio.h>
// 定义main函数
int main()
{
    // 请在此添加代码
    /********** Begin *********/
    int a[10],i,x,k,j=10;
    a[0]=1;
    a[1]=4;
    a[2]=6;
    a[3]=9;
    a[4]=11;
    a[5]=25;
    a[6]=31;
    a[7]=46;
    a[8]=83;
    a[9]=100;
    scanf("%d",&x);
    for(i=0;i<=9;i++)
    {
        if (x>a[i] && x<a[i+1])
        {
            for(k=10-i-1;k>0;k--)
            {
                a[j]=a[j-1];
                j--;
            }
            a[i+1]=x;
        }

    }

    if(x<a[0])
    {
        for(k=10;k>0;k--)
        {
            a[j]=a[j-1];
            j--;
        }
        a[0]=x;
    }
  
  
  for(i=0;i<=10;i++)
  {
      printf("%d ",a[i]);
  }
    /********** End **********/
    return 0;
}
