#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<int> vi(N);
  for(int i = 0; i < N; i++){
    cin >> vi[i];
  }
  while(1){
    int min = *min_element(vi.begin(), vi.end());
    int ans = min;
    for(int i = 0; i < N; i++){
      int mod = vi[i] % min;
      if(mod == 0){
        mod = min;
      }
      if(mod < ans){
        ans = mod;
      }
      vi[i] = mod;
    }
    //cout << min << endl;
    if(ans == min){
      cout << min << endl;
      break;
    }
  }

  return 0;
}
