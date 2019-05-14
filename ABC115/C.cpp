#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  for(int &x : h){
    cin >> x;
  }
  sort(h.begin(), h.end());
  int min = h[K-1] - h[0];
  for(int i = 0; i < N - K + 1; i++){
    int sub = h[i+K-1] - h[i];
    if(sub < min){
      min = sub;
    }
  }
  cout << min << endl;
  return 0;
}
