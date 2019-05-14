#include <bits/stdc++.h>

using namespace std;

typedef long long lint;
int main(void)
{
  lint N, M;
  cin >> N >> M;
  vector<pair<lint, lint> > vp(N);
  for(int i = 0; i < N; i++){
    cin >> vp[i].first >> vp[i].second;
  }

  sort(vp.begin(), vp.end());
  int i = 0;
  lint sum = 0;
  while(1){
    //cout << vp[i].first << " " << vp[i].second << endl;
    lint n = vp[i].second;
    if(M <= n){
      sum += vp[i].first * M;
      break;
    }
    else{
      sum += vp[i].first * n;
      M -= n;
      i++;
    }
  }
  cout << sum << endl;
}
