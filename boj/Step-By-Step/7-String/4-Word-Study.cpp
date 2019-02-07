#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<pair<char, int>> wordVector;
    vector<pair<char, int>>::iterator it; 
    char c;

    for(c='A'; c<='Z'; ++c) {
        wordVector.push_back(pair<char, int>(c, 0));
    }   

    while(cin >> c) {
        c = toupper(c);
        for(it=wordVector.begin(); it!=wordVector.end() &&
            !(it->first==c); ++it)
            ;
        if(it != wordVector.end())
            it->second += 1;
    }   

    sort(wordVector.begin(), wordVector.end(),
        [](pair<char, int>& A, pair<char, int>& B) {
        return A.second > B.second;
    }); 

    it = wordVector.begin();
    if(it->second == (++it)->second)
        cout << '?';
    else
        cout << wordVector.begin()->first;

    return 0;
}
