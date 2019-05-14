#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    long long a = 0;
    long long b = 0;
    for(int i = 1; i <= N; i++){
      if(i % K == 0){
        a++;
      }
      if(K % 2 == 0 && i % K == K / 2){
        b++;
      }
    }

    cout << (long long)(a * a * a) + (long long)(b * b * b) << endl;
}