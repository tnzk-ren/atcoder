#include<bits/stdc++.h>
using namespace std;
using lint = long long;

void print6(int a, int b)
{
  cout << setfill('0') << right << setw(6) << a;
  cout << setfill('0') << right << setw(6) << b << endl;
  cout << setfill(' ');
}

struct tri{
  int a;
  int b;
  int c;

  bool operator<(const tri &another) const
  {
    if(a != another.a)
      return a < another.a;

    if(b != another.b)
      return b < another.b;

    return c < another.c;
  };
};

int main(void)
{
  int N, M;
  cin >> N >> M;
  vector<tri> vp(M);
  //vector<vector<int> > vv(N, vector<int>(M, 0));
  for(int i = 0; i < M; i++){
    cin >> vp[i].a >> vp[i].b;
    vp[i].c = i;
  }
  sort(vp.begin(), vp.end());
  int cnt = 1;
  int last_p = 0;
  vector<tri> ans(M);
  for(int i = 0; i < M; i++){
    if(last_p != vp[i].a){
      last_p = vp[i].a;
      cnt = 1;
    }
    ans[i].a = vp[i].c;
    ans[i].b = vp[i].a;
    ans[i].c = cnt;
    cnt++;
  }

  sort(ans.begin(), ans.end());

  for(int i = 0; i < M; i++){
    print6(ans[i].b, ans[i].c);
  }
}
