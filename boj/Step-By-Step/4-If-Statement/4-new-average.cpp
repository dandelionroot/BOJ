#include <iostream>
using namespace std;

double GetMax(double *arr, int len) {
	double max = arr[0];
	//int len = sizeof(arr) / sizeof(*arr); -> 배열의 경우는 가능
	for(int i=0; i<len; i++) {
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

double GetAver(double max, double *arr, int len) {
	double sum = 0;
	//int len = sizeof(arr)/sizeof(*arr);
	for(int i=0; i<len; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	return sum / len;
}

int main(void)
{
	int numberOfSubjects = 0;
	double tempScore = 0;
	double* pScoresOfSubjects = NULL;
	double max, aver;
	cin >> numberOfSubjects;
	
	pScoresOfSubjects = new double[numberOfSubjects];

	for(int i=0; i<numberOfSubjects; i++) {
		cin >> tempScore;
		pScoresOfSubjects[i] = tempScore;
	}

	max = GetMax(pScoresOfSubjects, numberOfSubjects);
	cout<<fixed;
	cout.precision(2);
	cout << GetAver(max, pScoresOfSubjects, numberOfSubjects) << endl;

	return 0;
}
