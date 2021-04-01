#include <stdio.h>
struct student
{
    int num;
    char name[20];
    float score1;
    float score2;
    float score3;
    float sum;
}stu[9999];

int main()
{
    int x,i;
    printf("n=");
    scanf_s("%d", &x);
    printf("\n");

    for (i = 0; i < x; i++)
    {  
        printf("student_%d:", i + 1);
        printf("\nnum:");
        scanf_s("%d", &stu[i].num);
        printf("name:");
        scanf_s("%s", stu[i].name,19);
        printf("score1,score2,score3:");
        scanf_s("%f", &stu[i].score1);
        scanf_s("%f", &stu[i].score2);
        scanf_s("%f", &stu[i].score3);
        printf("\n");
        stu[i].sum = stu[i].score1 + stu[i].score2 + stu[i].score3;
    }

    printf("num     name    score1   score2   score3   sum       average\n");
        for (i = 0; i < x; i++)
        {
            printf("%d       ", stu[i].num);
            printf("%s       ", stu[i].name);
            printf("%.1f     ", stu[i].score1);
            printf("%.1f     ", stu[i].score2);
            printf("%.1f     ", stu[i].score3);
            printf("%.1f     ", stu[i].score1+ stu[i].score2+stu[i].score3);
            printf("%.1f", (stu[i].score1 + stu[i].score2 + stu[i].score3)/3);
             printf("\n");
        }
    printf("=========================================================");
        printf("\naverage");

        float sum1=0,sum2=0,sum3=0;
        for (i = 0; i < x; i++)
        {
            sum1 = sum1 + stu[i].score1;
            sum2 = sum2 + stu[i].score2;
            sum3 = sum3 + stu[i].score3;
        }

        printf("         %.1f     %.1f     %.1f",sum1/x,sum2/x,sum3/x);
        printf("\n");
        float max = stu[0].sum;
        int maxnum;
        for (i = 0; i < x; i++)
        {
            if (stu[i].sum > max)
            {
                max = stu[i].sum;
                maxnum = i;
            }
        }
      
        printf("%d       ", stu[maxnum].num);
        printf("%s       ", stu[maxnum].name);
        printf("%.1f     ", stu[maxnum].score1);
        printf("%.1f     ", stu[maxnum].score2);
        printf("%.1f     ", stu[maxnum].score3);
        printf("%.1f     ", stu[maxnum].score1 + stu[maxnum].score2 + stu[maxnum].score3);
        printf("%.1f", (stu[maxnum].score1 + stu[maxnum].score2 + stu[maxnum].score3) / 3);
        printf("\n");

    return 0;
}

