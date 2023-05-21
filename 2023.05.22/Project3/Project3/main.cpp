#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len)
{
	int answer = 0;

	for (int i = 0; i < calorie_len; i++)
	{
		if (calorie[i + 1] > calorie[i])
		{
			int cal = calorie[i + 1] - calorie[i];

			answer += cal;
		}
	}

	return answer;
}

int main()
{
	int calorie[] = { 713, 665, 873, 500, 751 };
	int ret = solution(calorie, 5);

	printf("solution 함수의 반환 값은 %d 입니다. \n", ret);
}