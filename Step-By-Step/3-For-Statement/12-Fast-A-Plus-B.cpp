#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  int A=0, B=0;
  scanf("%d", &N);
  for(int i=0; i<N; i++) {
    scanf("%d %d", &A, &B);
    printf("%d\n", A+B);
  }

  return 0;
}
