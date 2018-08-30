//Today is 2007/01/01 Monday
//Which day is the 2007/x/y ?

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string nameOfDay[12] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int x = 0, y = 0, whichDay = 0;
  cin >> x >> y;
  for(int i=0; i<x-1; i++) {
    whichDay += numberOfDays[i];
  }
  whichDay = (whichDay + y) % 7;
  cout << nameOfDay[whichDay] << endl;

  return 0;
}
