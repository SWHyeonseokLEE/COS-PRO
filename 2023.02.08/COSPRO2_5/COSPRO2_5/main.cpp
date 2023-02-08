#include <stdio.h>

int solution(int price, char grade)
{
	int answer = 0;
	double percent;
	int sale;

	if (grade == 'S')
	{
		percent = 0.95;
		sale = price * percent;
	}

	if (grade == 'G')
	{
		percent = 0.9;
		sale = price * percent;
	}

	if (grade == 'V')
	{
		percent = 0.85;
		sale = price * percent;
	}
	answer = sale;
	return answer;
}

int main(void)
{
	int price1 = 2500;
	char grade1 = 'V';
	int ret1 = solution(price1, grade1);
	printf("가격은 %d 원입니다.\n", ret1);

	int  price2 = 96900;
	char grade2 = 'S';
	int ret2 = solution(price2, grade2);
	printf("가격은 %d 원입니다.", ret2);
}
