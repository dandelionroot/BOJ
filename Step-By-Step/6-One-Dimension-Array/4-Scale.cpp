#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int kind(int* in) {
	int i;
	for(i=0; i<7; i++) {
		if(in[i+1] - in[i] != 1)
			break;
	}
	if(i == 7) return 1;
	for(i=0; i<7; i++) {
		if(in[i+1] - in[i] != -1)
			break;
	}
	if(i == 7) return 2;
	else return 3;
}

int main(void) {
	int in[8];
	for(int i=0; i<8; i++)
		cin >> in[i];
	switch(kind(in)) {
	case 1:
		cout << "ascending" << endl;
		break;
	case 2:
		cout << "descending" << endl;
		break;
	case 3:
		cout << "mixed" << endl;
		break;
	}
}
