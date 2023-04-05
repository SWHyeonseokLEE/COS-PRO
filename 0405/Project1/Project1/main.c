#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//height_m은 배열 height의 길이입니다.
int solution(int height[], size_t height_m, int k) {
    int answer = 0;
    for (int i = 0; i < height_m; ++i)
        if (height[i] < k)
            answer++;
    return answer;
}

int main()
{

    int height[] = {165, 170, 175, 180, 184};
    int height_m = 5;
    int k = 175;
    int answer = 0;

    answer = solution(height, height_m, k);

    printf("기준키:  %d \n", k);
    printf("%d보다 큰 사람 %d명", k, answer);

    return 0;
    
}