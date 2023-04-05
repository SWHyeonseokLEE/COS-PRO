#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//name_list_m은 name_list에 들어있는 문자열의 개수입니다.
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

    printf("이름에 j가 들어가는 사람은 %d명 입니다.", result);

    return 0;
}