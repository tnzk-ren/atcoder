#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N, M, C;
  int cnt = 0;
  cin >> N >> M >> C;
  vector<int> B(M);
  for(int j = 0; j < M; j++){
    cin >> B[j];
  }
  for(int i = 0; i < N; i++){
    int ans = C;
    for(int j = 0; j < M; j++){
      int a;
      cin >> a;
      ans += a * B[j];
    }
    if(ans > 0){
      cnt++;
    }
  }
  cout << cnt << endl;
}
