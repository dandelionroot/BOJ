#include<iostream>

using namespace std;
int main()
{
    int num;
    cin >> num;

    for(int i=num; i>0; i--) {
      for(int k=0; k<num-i; k++) {
        cout << ' ';
      }
      for(int j=i; j>0; j--) {
        cout << '*';
      }
      cout << '\n';
    }

    return 0;
}
