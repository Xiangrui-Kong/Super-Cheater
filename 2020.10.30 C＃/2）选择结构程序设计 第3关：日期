/********** Begin **********/
#include <stdio.h>
int main()
{
int y,m,d,sum,run,msum;
scanf("%d-%d-%d",&y,&m,&d);
if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
run=1;
else 
run=0;

if (run==1)
{
    switch (m)
{
    case 2: msum=31; break;
    case 3: msum=31+29;   break;
    case 4: msum=31+29+31;  break;
    case 5: msum=31+29+31+30;   break;
    case 6: msum=31+29+31+30+31;  break;
    case 7: msum=31+29+31+30+31+30;  break;
    case 8: msum=31+29+31+30+31+30+31;   break;
    case 9: msum=31+29+31+30+31+30+31+31;   break;
    case 10: msum=31+29+31+30+31+30+31+31+30;  break;
    case 11: msum=31+29+31+30+31+30+31+31+30+31;   break;
    case 12: msum=31+29+31+30+31+30+31+31+30+31+30;  break;

}
}

else if(run==0)
{
switch (m)
{
    case 2: msum=31;   break;
    case 3: msum=31+28;  break;
    case 4:msum=31+28+31;  break;
    case 5: msum=31+28+31+30; break;
    case 6: msum=31+28+31+30+31;   break;
    case 7: msum=31+28+31+30+31+30;  break;
    case 8: msum=31+28+31+30+31+30+31; break;
    case 9: msum=31+28+31+30+31+30+31+31;   break;
    case 10: msum=31+28+31+30+31+30+31+31+30;   break;
    case 11: msum=31+28+31+30+31+30+31+31+30+31;  break;
    case 12: msum=31+28+31+30+31+30+31+31+30+31+30;   break;

}
}

sum=msum+d;
printf("%d",sum);


return 0;
}




/********** End **********/
