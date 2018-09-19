#include <iostream>
#include <cmath>
using namespace std;

int* getDigits(int num) {
	int* nums = new int[10];
	int start = pow(10, 8);
	while(num % start == num) {
		start /= 10;
	}
	int index = 0;
	for(int i=start; i!=0; i/=10) {
		nums[index] = num / i;
		num -= nums[index]*i;
		index++;
	}
	for(int i=index; i<=9; i++) {
		nums[i] = -1;
	}
	return nums;
}

int main(void) {
	int A, B, C;
	int* nums;
	cin >> A >> B >> C;

	nums = getDigits(A * B * C);
	for(int i=0; i<=9; i++) {
		int cnt = 0;
		int j = 0;
		while(nums[j] != -1) {
			if(nums[j] == i) cnt++;
			j++;
		}
		cout << cnt << endl;
	}
	delete[] nums;
	return 0;
}
