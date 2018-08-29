#include <iostream>
using namespace std;

int main()
{
	int A, B;
	double res;
	cin >> A >> B;
	if(B != 0) {
		res = (double)A/B;
		cout << fixed;
		cout.precision(10);
		cout << res << endl;
	}
	return 0;
}
