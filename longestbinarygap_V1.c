#include <stdio.h>

int solution(int N)
{
    int binaryNum[32];
    int binaryNumNew[32];
    int i = 0;
    while (N>0)
    {
        binaryNum[i] = N % 2;
        N = N / 2;
        i++;
    }
    for (int j = 0; j <i; j++)
    {
        printf("%d",binaryNum[j]);
    }
    printf("\n");
    int t=0;
    for (int j = 0; j <i; j++)
    {
        if(binaryNum[j]==1)
        {
            for (int k = j; k <i; k++)
            {
                binaryNumNew[t]= binaryNum[k];
                printf("%d",binaryNumNew[t]);
                t++;
            }
            printf("\n");
            break;
        }
        
    }
    int maxGap = 0;
    int currentGap = 0;
    int countingGap = 0;
    for (int j = 0; j <t;j++)
    {
        if(binaryNumNew[j]==1)
        {
            if(currentGap>0)
            {
                if(currentGap> maxGap)
                {
                    maxGap=currentGap;
                    currentGap =0;
                }
            }
            countingGap=1;
        }
        else if (countingGap==1)
        {
            currentGap++;
        }
    }
    return maxGap;
}
int main()
{
    int N;
    printf("Number: ");
    scanf("%d", &N);
    int max = solution(N);
    printf("The length of the longest binary gap in %d is %d\n", N, max);
    return 0;
}