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
    int N, M;
    cin >> N >> M;
    int s[10][10] = {0};
    vector<int> p(M);
    for(int i = 0; i < M; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int t;
            cin >> t;
            s[i][t-1] = 1;
        }
    }
    for(int i = 0; i < M; i++){
        cin >> p[i];
    }
    int bin = 1;
    for(int i = 0; i < N; i++){
        bin *= 2;
    }
    int cnt = 0;
    //cout  << bin << endl;
    for(int i = 0; i < bin; i++){
        int n_switch = 0;
        int sum = 0;
        for(int k = 0; k < M; k++){
            n_switch = 0;
            int mask = 1;
            for(int j = 0; j < N; j++){
                if((mask & i) == mask){
                    if(s[k][j] == 1)
                        n_switch++;
                }
                mask = mask << 1;
            }
            //cout << n_switch << endl;
            if(p[k] == (n_switch % 2)){
                sum++;
            }
            //cout << p[k] << endl;
        }
        if(sum == M){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}