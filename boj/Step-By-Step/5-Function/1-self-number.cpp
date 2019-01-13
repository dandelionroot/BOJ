#include <iostream>
#include <cmath>
using namespace std;

void calDigits(int* digits, const int number) // 각 자리의 숫자를 구해서 digits 배열에 저장해주는 함수
{
	for(int i=0; i<5; i++) {
		int front = 0;
		for(int j=0; j<i; j++)
			front += digits[j]*pow(10,4-j);
		digits[i] = (number-front) / pow(10, 4-i);
	}
}

int main(void) // 1부터 10000까지 모든 생성수를 계산한다.
{
	int createdNum, digits[5], baseNums[10000];
	for(int i=0; i<10000; i++)
		baseNums[i] = i+1; // 1(index=0)~10000(index=9999) 베이스넘버로 깔아두기
	for(int i=1; i<=10000; i++) { // 여기서 i는 1부터 10000까지의 숫자
		calDigits(digits, i); // 숫자 i의 각각 자리의 숫자를 구해서 digits배열에 저장
		createdNum = i + digits[0] + digits[1] + digits[2] + digits[3] + digits[4]; //생성되는 숫자 구하기
		if(1 <= createdNum && createdNum <= 10000) {
			baseNums[createdNum-1] = 0; // 셀프넘버가 아닌 수들은 0으로 셋팅
		}
	}
	for(int i=0; i<10000; i++) {
		if(baseNums[i] != 0) // 0이 아닌 수들은 셀프넘버이므로
			cout << baseNums[i] << endl; // 출력
	}	
	return 0;
}
