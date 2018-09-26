#include <iostream>
#include <cstdio>
using namespace std;
// 0 ~ 25 / a ~ z / 97 ~ 122
int main(void)
{
	int alpha[26];
	char word[101];
	for(int i=0; i<26; ++i)
		alpha[i] = -1;
	scanf("%s", word);

	for(int i=0; word[i]!='\0'; ++i) {
		int index = (int)word[i]-97;
		if(alpha[index] == -1)
			alpha[index] = i;
	}

	for(int i=0; i<26; ++i) {
		cout << alpha[i];
		if(i!=25) cout << ' ';
	}
	cout << endl;
	return 0;
}

/*
int main(void)
{
	char c1 = 'a';
	char c2 = 'z';
	cout << (int)c1 << endl;
	cout << (int)c2<< endl;
	return 0;
}
*/
