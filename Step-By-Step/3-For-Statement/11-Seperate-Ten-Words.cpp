#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
  char words[101];
  scanf("%s", words);

  for(int i=0; i<strlen(words); i++){
    printf("%c", words[i]);
    if( (i+1) % 10 == 0 )
      printf("\n");
  }

  return 0;
}
