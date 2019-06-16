#include <bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int N, K;
    cin >> N >> K;
    long double win = 0;

    int maxcnt = 0;
    for(int i = 1; i <= K; i*=2)maxcnt++;
    vector<long double> bp(maxcnt+1);
    long double bn = 0.5;
    bp[0] = 1;
    for(int i = 1; i <= maxcnt; i++){
        bp[i] = bp[i-1] * bn;
        //cout << bp[i] << endl;
    }
    for(int i = 1; i <= N; i++){
        int cnt = 0;
        for(int j = i; j < K; j*=2) cnt++;
        win += bp[cnt];
        //cout << 1.0 / N << " " << bp[cnt] << endl;
    }
    //cout << fixed;
    cout << setprecision(10) << win / N << endl;
    return 0;
}