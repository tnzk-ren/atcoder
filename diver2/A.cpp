#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    if(K == 1){
        cout << 0 << endl;
    }
    else{
        cout << N - K << endl;
    }
    return 0;
}