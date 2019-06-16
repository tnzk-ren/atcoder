#include<bits/stdc++.h>

using namespace std;
using lint = long long;

struct tri{
  string a;
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
    int N;
    cin >> N;
    vector<tri> S(N);

    for(int i = 0; i < N; i++){
        cin >> S[i].a >> S[i].b;
        S[i].b *= -1;
        S[i].c = i+1;
    }

    sort(S.begin(), S.end());

    for(int i = 0; i < N; i++){
        cout << S[i].c << endl;
    }

    return 0;
}