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
    sum += numbers[i] - '0'; // 묵시적으로 형변환이 되는데 아스키 코드값을 가짐. '0'을 빼주면 리터럴 그대로의 정수를 얻을수 있음.
  }

  cout << sum << endl;

  return 0;
}
