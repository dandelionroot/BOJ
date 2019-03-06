#include <iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;

// 입력된 단어의 각 자리를 체크할 수 있는 클래스
class MyString
{
private:
	string str;
	int size;
	bool* checked;
public:
	// 인자로 전달된 크로아티아 문자의 출현횟수를 반환
	int getNumOfCroatia(string& croatia);
	// 크로아티아 문자로 판별되지 않고 남은 문자의 개수를 반환
	int getNumOfUnchecked() const {
		int accum = 0;
		for(int i=0; i<this->size; ++i)
			if(!this->checked[i])
				++accum;
		return accum;
	}
	// string 하나를 입력받고 checked 배열을 동적할당
	friend istream& operator>>(istream& is, MyString& ms);
};

int MyString::getNumOfCroatia(string& croatia) {
	int accum = 0;

	// 문자는 두 자리 또는 세 자리가 있으므로 자릿수에 따른 처리를 함
	switch(croatia.size()) {
	case 2:
		for(int i=0; i<this->size-1; ++i) {
			if(this->checked[i] || this->checked[i+1])
				continue;
			char temp[3];
			temp[0] = this->str[i]; temp[1] = this->str[i+1];
			temp[2] = {0};
			string cmp(temp);
			if(cmp == croatia) {
				this->checked[i] = true;
				this->checked[i+1] = true;
				accum++;
			}
		}
		break;
	case 3:
		for(int i=0; i<this->size-2; ++i) {
			if(this->checked[i] || this->checked[i+1] ||
				this->checked[i+2])
				continue;
			char temp[4];
			temp[0] = this->str[i]; temp[1] = this->str[i+1];
			temp[2] = this->str[i+2]; temp[4] = {0};
			string cmp(temp);
			if(cmp == croatia) {
				this->checked[i] = true;
				this->checked[i+1] = true;
				this->checked[i+2] = true;
				accum++;
			}
		}
		break;
	default:
		break;
	}

	return accum;
}

istream& operator>>(istream& is, MyString& ms) {
	string str;
	is >> str;
	ms.str = str;
	ms.size = (int)str.length();
	// 체크 벡터를 string 사이즈만큼 할당
	ms.checked = new bool[ms.size];
	for(int i=0; i<ms.size; ++i)
		ms.checked[i] = false;
	return is;
}

int main(void)
{
	array<string, 8> changed = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	int accum = 0;
	MyString input;

	cin >> input;

	for(int i=0; i<changed.size(); ++i) {
		accum += input.getNumOfCroatia(changed[i]);
	}
	accum += input.getNumOfUnchecked();

	cout << accum << endl;
	return 0;
}
