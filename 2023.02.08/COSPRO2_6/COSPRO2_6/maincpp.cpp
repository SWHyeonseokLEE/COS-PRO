#include <stdio.h>

int func_a(int month, int day)
{
	int month_list[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int total = 0;

	for (int i = 0; i<month - 1; i++)
	{
		total += month_list[i];
	}


	return total + day;
}

int count_date(int start_month, int start_day, int end_month, int end_day)
{
	int ret_S = func_a(start_month, start_day);
	int ret_E = func_a(end_month, start_day);
	int date = ret_E - ret_S;

	return date;
}

int main(void)
{
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;

	int ret = count_date(start_month, start_day, end_month, end_day);

	printf("%d월 %d일부터 %d월%d까지의 일수는 %d일 입니다,\n",start_month, start_day, end_month, end_day, ret);
}