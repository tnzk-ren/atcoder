#include<bits/stdc++.h>

using namespace std;
using lint = long long;
#define MOD 1000000007

int main(void)
{
    int N, M;
    //lint mod = 1000000007;
    cin >> N >> M;
    vector<int> a(M);
    for(int  i = 0; i < M; i++){
        cin >> a[i];
    }
    /*
    for(int i = 1; i < M; i++){
        if(a[i] - a[i-1] == 1){
            cout << 0 << endl;
            return 0;
        }
    }
    */
    
    vector<lint> dp(N+1);
    int cnt = 0;
    for(int i = 0; i <= N; i++){
        if(cnt < M && a[cnt] == i){
            dp[i] = 0;
            cnt++;
        }
        else if(i == 0 || i == 1){
            dp[i] = 1;
        }
        else{
            dp[i] = (dp[i-1] % MOD + dp[i-2] % MOD) % MOD;
        }
        //cout << cnt << " " << dp[i] << endl;
    }

    cout << dp[N] << endl;


    return 0;
}