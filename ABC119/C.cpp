#include <bits/stdc++.h>

using namespace std;

#define MINIMUM  100000;
int cost(int N, int *abc, int *abc_cnt, int *abc_len, vector<int> l)
{
  if(N == 0){
    if(abc_cnt[0] == 0 || abc_cnt[1] == 0 || abc_cnt[2] == 0){
      return MINIMUM;
    }
    int total_cost = 0;
    for(int i = 0; i < 3; i++){
      total_cost += abs(abc[i] - abc_len[i]) + 10 * (abc_cnt[i]-1);
    }
    return total_cost;
  }
  int min;
  min = cost(N-1, abc, abc_cnt, abc_len, l);
  for(int i = 0; i < 3; i++){
    abc_cnt[i]++;
    abc_len[i] += l[N-1];
    min = std::min(min, cost(N-1, abc, abc_cnt, abc_len, l));
    abc_cnt[i]--;
    abc_len[i] -= l[N-1];
  }
  return min;
}

int main(void)
{
  int N, A, B, C;
  cin >> N >> A >> B >> C;
  vector<int> l(N);
  for(int &x: l)
    cin >> x;

  int abc[3];
  abc[0] = A;
  abc[1] = B;
  abc[2] = C;
  int abc_cnt[3] = {0};
  int abc_len[3] = {0};
  cout << cost(N, abc, abc_cnt, abc_len, l) << endl;
  return 0;
}
