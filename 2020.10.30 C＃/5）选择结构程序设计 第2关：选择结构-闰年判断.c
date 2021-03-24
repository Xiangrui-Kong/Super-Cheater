#include<stdio.h>
	int main(void)
	{  
        int y;
	  /*********Begin*********/
	  scanf("%d",&y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    printf("%d 是闰年！",y);
    else 
    printf("%d 不是闰年！",y);
	  
	  /*********End**********/ 
       return 0;
	}
