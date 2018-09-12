#include <iostream>
using namespace std;

int main(void)
{
	int len, X;
	int *pnums; // 동적할당으로 배열포인터를 가리킬 pnums
	int tempnum;

	cin >> len >> X;
	pnums = new int[len]; // new int[len]은 배열을 가리키는 포인터 반환

	for(int i=0; i<len; i++) {
		cin >> tempnum;
		pnums[i] = tempnum;
	}

	for(int i=0; i<len; i++) {
		if(pnums[i] < X)
			cout << pnums[i] << " ";
	}

	return 0;
}
