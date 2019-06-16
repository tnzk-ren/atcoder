#include <bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int N, k;
    cin >> N >> k;
    string S;
    cin >> S;
    char sm = S[k-1];
    if(sm  == 'A')  sm = 'a';
    else if(sm == 'B') sm = 'b';
    else sm = 'c';
    S[k-1] = sm;
    cout << S << endl;
    return 0;
}