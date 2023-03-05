#include <stdio.h>
#include <string.h>

int main()
{
	//aaa는 ASCII 코드로 97 97 97
	//aab는 ASCII 코드로 97 97 98
	//aac는 ASCII 코드로 97 97 99

	printf("%d \n", strcmp("aaa", "aaa"));
	printf("%d \n", strcmp("aab", "aaa"));
	printf("%d \n", strcmp("aab", "aac"));

	return 0;
}