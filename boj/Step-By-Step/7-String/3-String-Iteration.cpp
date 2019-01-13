/*
1. 문자열 S를 입력받고, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램
2. 알고리즘
	1> 테스트케이스 개수 입력
	2> for(testcase)
		1> 반복횟수 입력
		2> 문자열 입력
		3> 각 문자를 반복횟수만큼 출력
	3> 종료
*/

#include <cstdio>
#include <cstring>

int main(void)
{
	int t, i, j, k, num;
	char str[21];
	scanf("%d", &t);
	for(i=0; i<t; ++i) {
		scanf("%d %s", &num, str);
		for(j=0; j<strlen(str); ++j)
			for(k=0; k<num; ++k)
				printf("%c", str[j]);
		printf("\n");
	}
	return 0;
}
