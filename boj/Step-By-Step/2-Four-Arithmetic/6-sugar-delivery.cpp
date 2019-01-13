#include <iostream>
using namespace std;

/* recursive
int getNumOfBag(int num) {
	static int numOfBag = 0;
	if(num % 5 == 0 && num >= 5) {
		numOfBag++;
		getNumOfBag(num - 5);
	}
	else if(num >= 3) {
		numOfBag++;
		getNumOfBag(num - 3);
	}
	else {
		return (num == 0) ? numOfBag : -1;
	}
}
*/
//모든 경우에 대해 예시를 통하여 파악해 보는것이 중요.
int main()
{
	int N = 0;
	int numOfBag = 0;
	cin >> N;
	while(N >= 3) { // non-recursive
		if(N % 5 == 0 && N >= 5) {
			numOfBag++;
			N = N-5;
		}
		else if(N >= 3) {
			numOfBag++;
			N = N-3;
		}
	}

	cout << ((N == 0) ? numOfBag : -1) << endl;

	return 0;
}
