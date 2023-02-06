#include <stdio.h>
//#include <stdiobool.h>
#include <stdlib.h>

int solution(int K, int E)
{
	int M = 0;
	M = 210 - (K + E);
	return M;
}

int main()
{
	int K = 70;
	int E = 60;
	int ret = solution(K, E);

	printf("solution 함수의 반환 값은 %d입니다. \n", ret);
}