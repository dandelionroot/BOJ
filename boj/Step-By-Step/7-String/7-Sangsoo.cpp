#include <iostream>
using namespace std;

int main(void)
{
    int a, b, na = 0, nb = 0, div;

    cin >> a >> b;

    do {
        na *= 10;
        div = a%10;
        na += div;
    } while(a = a/10);

    do {
        nb *= 10;
        div = b%10;
        nb += div;
    } while(b = b/10);

    cout << (na > nb ? na : nb);
    
    return 0;
}
