#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  float a;
      scanf("%f",&a);
      if (a<=100 && a>=90)
      printf("A");
      else if (a<90 && a>80)
      printf("B");
      else if (a<80 && a>70)
      printf("C");
      else if (a<70 && a>60)
      printf("D");
      else if (a<60 && a>=0)
      printf("E");
      else {printf("Score is error!");}

	  
	  /*********End**********/ 
       return 0;
	}
