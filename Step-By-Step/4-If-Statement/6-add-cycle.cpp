#include <iostream>
using namespace std;

int main(void)
{
	int N, O, f, s, cnt = 0;
	cin >> N;
	O = N;
	do{
		s = (N % 10);
		f = (N - s) / 10;
		N = s * 10 + ((s + f) % 10);
		cnt++;
	}while(O != N);
	cout << cnt << endl;

	return 0;
}
