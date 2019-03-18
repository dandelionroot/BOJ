#include <iostream>
using namespace std;

int main(void)
{
	int an = 1, d = 6, i=1, in;
	cin >> in;
	for(; !(an >= in); ++i) {
		an += d;
		d += 6;
	}
	cout << i;
	return 0;
}
