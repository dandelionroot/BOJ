#include <bits/stdc++.h>
using namespace std;

void mapInit(map<char, bool>& m) {
    for(char c='a'; c<='z'; ++c)
        m[c] = false;
}

int main(void)
{
    int N, accum = 0;
    string s;
    map<char, bool> m;
    mapInit(m);

    cin >> N;
    while(N--) {
        unsigned int i;
        cin >> s;
        for(i=0; i<s.length(); ++i) {
            char prev;
            if(i>0)
                prev = s[i-1];
            if(i>0 && m[s[i]] == true && prev != s[i])
                break;
            if(m[s[i]] == false)
                m[s[i]] = true;
        }
        if(i == s.length())
            ++accum;
        mapInit(m);
    }   

    cout << accum;

    return 0;
}

