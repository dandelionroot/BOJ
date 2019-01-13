#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
//사실은 C로 구현한 것
int main(void)
{
  char words[101];
  scanf("%s", words);
  //char 하나씩 취급
  for(int i=0; i<strlen(words); i++){
    printf("%c", words[i]);
    if( (i+1) % 10 == 0 )
      printf("\n");
  }

  return 0;
}
