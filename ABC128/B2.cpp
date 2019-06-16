#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<pair<string, int> > S(N);

    for(int i = 0; i < N; i++){
        string a;
        int b;
        cin >> a >> b;
        ostringstream sout;
        sout << setfill('0') << setw(3) << (100-b);
        S[i].first = a + sout.str();
        S[i].second = i+1;
    }

    sort(S.begin(), S.end());
    for(int i = 0; i < N; i++){
        cout << S[i].second << endl;
    }
}