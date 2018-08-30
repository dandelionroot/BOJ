#include <iostream>
using namespace std;

int main()
{
	int A, B;
	double res;
	cin >> A >> B;
	if(B != 0) {//0으로 나눌 수 없다.
		res = (double)A/B;
		cout << fixed;//소숫점을 고정하고
		cout.precision(10);//10번째 자리까지 표현
		cout << res << endl;
	}
	return 0;
}
