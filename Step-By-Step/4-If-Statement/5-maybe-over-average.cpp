#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int C, N, over;
	float Case[1000], sum;
	cin >> C;
	for(int i=0; i<C; i++) {
		cin >> N;
		sum = 0;
		over = 0;
		for(int j=0; j<N; j++) {
			cin >> Case[j];
			sum += Case[j];
		}
		for(int k=0; k<N; k++) {
			if(Case[k] > sum / N)
				over++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)over / N * 100 << "%" << endl;
	}

	return 0;		
}
