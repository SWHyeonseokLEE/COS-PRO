#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i, j = 0;
int num = 0;


int* solution(int* score_len)
{
    int a[8];
    static int rank[8];
    for (i = 0; i < 8; i++)
    {
        a[i] = score_len[i];
    }

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (a[i] < a[j])
            {
                num = a[i];
                a[i] = a[j];
                a[j] = num;
            }
        }
    }

    for (i = 0; i < 8; i++) 
    {
        for (j = 0; j < 8; j++)
        {
            if (score_len[i] == a[j])
            {
                rank[i] = j + 1;
                break;
            }
        }
    }
    return rank;
}


int main(void)
{
    int score[8] = { 90,87,87,23,35,28,12,46 };
    int* students_num = solution(score);

    printf("[");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", students_num[i]);
    }
    printf("]\n");

    return 0;
}