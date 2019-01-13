#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while(true) {
		getline(cin, str);//한 줄을 통째로 입력받음
		if(str == "") // 공백이 있으면 안되는 조건
			break;
		cout << str << endl;
	}
	return 0;
}
