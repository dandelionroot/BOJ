#include <iostream>
#include <cstdio>
using namespace std;
//단어가 아예 안들어오는 경우도 조심
//처음, 마지막에 나오는 공백 조심
int main(void) {
	int acc = 0;
	char sentence[1000001];
	cin.getline(sentence, 1000000);

	for(int i=0; i<1000000; i++) {
	  if(sentence[i] == '\0')
		break;
	  else {
		if(i == 0 && sentence[i] != ' ')
			acc++;
		if(sentence[i] == ' ') {
			if(i < 999999)
				if(sentence[i+1] != ' ' && sentence[i+1] != '\0')
					acc++;
		}
	  }
	}

	cout << acc;
	return 0;
}
