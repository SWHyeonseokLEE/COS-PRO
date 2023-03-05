#include <stdio.h>

int main()
{
	int numArr[3][4];

	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;

	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;

	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;
	numArr[0][0] = 11;

	printf("%d \n", numArr[-1][-1]);
	printf("%d \n", numArr[0][4]);
	printf("%d \n", numArr[4][0]);
	printf("%d \n", numArr[5][5]);

	return 0;
}