#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N, M;
  cin >> N >> M;
  int ans[30] = {0};
  for(int i = 0; i < N; i++){
    int K;
    cin >> K;
    for(int j = 0; j < K; j++){
      int index;
      cin >> index;
      index--;
      ans[index]++;
    }
  }
  int cnt = 0;
  for(int i = 0; i < M; i++){
    if(ans[i] == N){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
