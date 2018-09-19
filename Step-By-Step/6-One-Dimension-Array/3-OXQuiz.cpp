#include <iostream>
#include <string>
using namespace std;

int cal(string str, int index) {
	if(index < 0) return 0;
	if(str.at(index) == 'O')
		return 1+cal(str, index-1);
	else
		return 0;
}

int main(void) {
	int testNum;
	cin >> testNum;
	string str;
	for(int i=0; i<testNum; i++) {
		cin >> str;
		int end = str.length()-1;
		int sum = 0;
		for(int j=end; j>=0; j--) {
			sum += cal(str, j);
		}
		cout << sum << endl;
	}
	return 0;
}
