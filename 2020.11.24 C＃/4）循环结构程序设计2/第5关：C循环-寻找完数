#include<stdio.h>
int main()
{
    int i, j, s, n;  
    scanf("%d", &n);  
    for( i=2; i<=n; i++ )
    {
        s=0;  
        for( j=1; j<i; j++ )
        {
            if(i%j == 0) 
                s = s + j;
        }
        if(s == i) 
            printf("%d\n", i);
    }
    return 0;
}
