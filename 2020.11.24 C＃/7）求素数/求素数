#include<stdio.h>
#include<math.h>
int main()
{
    int start, end, i, k, m, flag = 1, h = 0;
    do
    {

        scanf_s("%d%d", &start, &end);
    } while (!(start > 0 && start < end));

    for (m = start; m <= end; m++)
    {
        k = sqrt(m);
        for (i = 2; i <= k; i++)
            if (m % i == 0)
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            printf("%-4d", m);
            h++;
            if (h % 10 == 0)
                printf("\n");
        }
        flag = 1;
    }

    return 0;
}
