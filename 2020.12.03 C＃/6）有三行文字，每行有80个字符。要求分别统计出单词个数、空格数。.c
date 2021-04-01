#include<stdio.h>
int main(void)
{
    printf("请输入第一行：");
    int ying, shu, kong, qi;
    char x;
    ying = shu = kong = qi = 0;
    while ((x = getchar()) != '\n')
    {
        if (x >= 'a' && x <= 'z')
            ying++;
        else if (x >= '0' && x <= '9')
            shu++;
        else if (x != 32)
            qi++;
        else kong++;

    }
    printf("英文有：%d个 数字有：%d个 空格有：%d个 其他有：%d个\n", ying, shu, kong, qi);
    printf("请输入第二行：");
    ying = shu = kong = qi = 0;
    while ((x = getchar()) != '\n')
    {
        if (x >= 'a' && x <= 'z')
            ying++;
        else if (x >= '0' && x <= '9')
            shu++;
        else if (x != 32)
            qi++;
        else kong++;

    }
    printf("英文有：%d个 数字有：%d个 空格有：%d个 其他有：%d个\n", ying, shu, kong, qi);
    printf("请输入第三行：");
    ying = shu = kong = qi = 0;
    while ((x = getchar()) != '\n')
    {
        if (x >= 'a' && x <= 'z')
            ying++;
        else if (x >= '0' && x <= '9')
            shu++;
        else if (x != 32)
            qi++;
        else kong++;

    }

    printf("英文有：%d个 数字有：%d个 空格有：%d个 其他有：%d个", ying, shu, kong, qi);
    return 0;
}
