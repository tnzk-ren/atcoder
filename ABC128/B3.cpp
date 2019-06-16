#include<bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int N;
    cin >> N;
    vector<tuple<string, int, int> > S(N);

    for(int i = 0; i < N; i++){
        cin >> get<0>(S[i]) >> get<1>(S[i]);
        get<1>(S[i]) *= -1;
        get<2>(S[i]) = i+1;
    } 

    sort(S.begin(), S.end());

    for(int i = 0; i < N; i++){
        cout << get<2>(S[i]) << endl;
    }

    return 0;
}