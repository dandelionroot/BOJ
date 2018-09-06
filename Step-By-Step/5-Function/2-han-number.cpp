#include <iostream>
#include <cmath>
using namespace std;
//1 <= N <= 1000

bool isHanNumber(int number)
{
	int digits[4] = {0, 0, 0, 0}, frontNumber;
	for(int i = 0; i < 4; i++) {
		int j = 0; // digits[2] = number - digits[0]*1000 - digits[1]*100
		frontNumber = number;
		while(j < i) {
			frontNumber -= digits[j] * pow(10, 3-j);
			j++;
		}
		digits[i] = frontNumber / pow(10, 3-i);
	}
	int j = 0;
	while(digits[j] == 0)
		j++;
	if(j == 3)
		return true;
	if(j < 3) {
		int difference = digits[j] - digits[j+1];
		for(int k = j + 1; k < 3; k++)
			if(digits[k] - digits[k+1] != difference)
				return false;
		return true;
	}
	return false;
}

int main(void)
{
	int n, cnt = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		if(isHanNumber(i))
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
