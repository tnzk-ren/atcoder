#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
  int N, Q;
  cin >> N >> Q;
  string str;
  cin >> str;
  vector<int> numAC(N);
  int cnt = 0;
  numAC[0] = 0;

  for(int i = 1; i < N; i++){
    string s2 = str.substr(i-1, 2);
    if(s2 == "AC"){
      cnt++;
    }
    numAC[i] = cnt;
  }
  vector<int> ans(Q);
  for(int i = 0; i < Q; i++){
    int l, r;
    cin >> l >> r;
    int ac = numAC[r-1] - numAC[l-1];
    //cout << numAC[r-1] << " " << numAC[l-1] << emdl;;
    ans[i] = ac;
  }

  for(int i = 0; i < Q; i++){
    cout << ans[i] << endl;
  }
}
