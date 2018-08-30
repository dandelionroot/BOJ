#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int N = 0, sum = 0;
  cin >> N;
  string numbers;

  cin >> numbers;

  for(int i=0; i<N; i++) {
    sum += numbers[i] - '0';
  }

  cout << sum << endl;

  return 0;
}
