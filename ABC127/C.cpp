#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<int> L(M);
    vector<int> R(M);

    for(int i = 0; i < M; i++){
        cin >> L[i] >> R[i];
    }

    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    
    int ans = R[0] - L[M-1] + 1;
    if(ans < 0 ){
        ans = 0;
    }
    cout << ans << endl;

    return 0;
}