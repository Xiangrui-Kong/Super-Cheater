#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);       //或者ch=getchar();
	/********** Begin **********/
	if (ch>='A'&& ch<='Z' || ch>='a'&& ch<='z' )
    {printf("%c是英文字母",ch);}
    else if (ch>=48 && ch<=57)
        {printf("%c是数字字符",ch);}
        else printf("%c是其它字符",ch);


    /********** End **********/
	return 0;
}
