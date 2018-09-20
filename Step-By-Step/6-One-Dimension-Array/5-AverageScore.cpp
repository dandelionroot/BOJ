#include<iostream>
using namespace std;

int main()
{
	int a[5], i=0, sum=0;
	while(i<5) {
		cin>>a[i];
		i++;
	}
	for(i=0; i<5; i++) {
		if(a[i]<40) a[i]=40;
		sum += a[i];
	}
	cout << sum/5 << endl;
	return 0;
}
