#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	for(int i=0; i<100; i++) { //공백이 있어도 되는 경우
		getline(cin, str);
		cout << str << endl;
	}
	return 0;
}
