#include <iostream>
#include <string>
using namespace std;

int getTime(char c) {
    int dividen = (int)c+1;
    if(c == '1')
        return 2;
    else if (c > 'R' && c < 'Z')
        dividen -= 1;
    else if (c == 'Z')
        dividen -= 2;
    return (dividen/3)-19;
}

int main(void)
{
    int accum = 0;
    string a;
    cin >> a;
    for(int i=0; i<a.length(); ++i) {
        accum += getTime(a[i]);
    }
    cout << accum;
    return 0;
}
