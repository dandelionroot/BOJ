#include <iostream>
using namespace std;

char field[3073][6145];

void setSpace(int N)
{	
	for(int i=0; i<N; i++) {
		int j;
		for(j=0; j<2*N; j++)
			field[i][j] = ' ';
		field[i][j] = '\0';
	}
}

void setStar(int N, int y, int x)
{
	if(N == 3) {
		field[y][x] = '*';
		field[y+1][x-1] = '*';
		field[y+1][x+1] = '*';
		field[y+2][x-2] = '*';
		field[y+2][x-1] = '*';
		field[y+2][x] = '*';
		field[y+2][x+1] = '*';
		field[y+2][x+2] = '*';
		return;
	}
	setStar(N/2, y, x);
	setStar(N/2, y+N/2, x-N/2);
	setStar(N/2, y+N/2, x+N/2);
}

void drawField(int N)
{
	for(int i=0; i<N; i++) {
		for(int j=0; j<2*N; j++)
			cout << field[i][j];
		cout << endl; 
	}
}

int main(void)
{
	int N;
	cin >> N;

	setSpace(N);
	setStar(N, 0, N-1);
	drawField(N);

	return 0;
}
