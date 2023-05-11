#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, char* transportations)
{
	int adult = 0;
	int child = 0;
	int answer = 0;

	if (strcmp(transportations, "Bus") == 0)
	{
		adult = 40000;
		child = 15000;
	}
	else if (strcmp(transportations, "Ship") == 0)
	{
		adult = 30000;
		child = 13000;
	}
	else if (strcmp(transportations, "Airplane") == 0)
	{
		adult = 70000;
		child = 45000;
	}
	
	if (member_age_len >= 10)
	{
		adult = adult * 0.9;
		child = child * 0.9;
	}

	for (int i = 0; i < member_age_len; i++)
	{
		if (member_age[i] >= 20)
		{
			answer += adult;
		}
		else if(member_age[i] < 20)
		{
			answer += child;
		}
	}

	return answer;
}

int main()
{
	int member_age1[5] = {13, 33, 45, 11, 20 };
	int member_age_len1 = 5;
	char* transportations1 = "Bus";
	int ret1 = solution(member_age1, member_age_len1, transportations1);
	
	printf("solution 함수의 반환 값은 %d입니다. \n", ret1);


	int member_age2[10] = { 25, 11, 27, 56, 7, 19, 52, 31, 77, 8 };
	int member_age_len2 = 10;
	char* transportations2 = "Ship";
	int ret2 = solution(member_age2, member_age_len2, transportations2);

	printf("solution 함수의 반환 값은 %d입니다. \n", ret2);
}