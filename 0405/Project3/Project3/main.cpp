#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//name_list_m�� name_list�� ����ִ� ���ڿ��� �����Դϴ�.
int solution(char* name_list[], size_t name_list_m) {
    int answer = 0;
    for (int i = 0; i < name_list_m; ++i)
        for (int j = 0; name_list[i][j] != 0; ++j)
            if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
                answer++;
                break;
            }
    return answer;
}

int main()
{
    char* name_list[4] = { "james", "luke", "oliver", "jack" };
    int name_list_m = 4;
    int result = 0;

    result = solution(name_list, name_list_m);

    printf("�̸��� j�� ���� ����� %d�� �Դϴ�.", result);

    return 0;
}