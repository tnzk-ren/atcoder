#include<bits/stdc++.h>

using namespace std;

#define AA 0
#define AC 1
#define AG 2
#define AT 9
#define CA 3
#define CC 4
#define CG 5
#define CT 10
#define GA 6
#define GC 7
#define GG 8
#define GT 11
#define TA 12
#define TC 13
#define TG 14
#define TT 15

//not ACG CAG AGC
int main(void)
{
  int N;
  long long mod = 10e9 + (long long)9;
  cin >> N;
  long long acg[16];
  for(int i = 0; i < 16; i++){
    acg[i] = 1;
  }
  for(int i = 1; i < N - 1; i++){
    //+A
    long long aa = acg[AA];
    long long ac = acg[AC];
    long long ag = acg[AG];
    long long at = acg[AT];
    long long ca = acg[CA];
    long long cc = acg[CC];
    long long cg = acg[CG];
    long long ct = acg[CT];
    long long ga = acg[GA];
    long long gc = acg[GC];
    long long gg = acg[GG];
    long long gt = acg[GT];
    long long ta = acg[TA];
    long long tc = acg[TC];
    long long tg = acg[TG];
    long long tt = acg[TT];

    acg[AA] = (aa + ca + ga + ta) % mod;
    acg[CA] = (ac + cc + gc + tc) % mod;
    acg[GA] = (ag + cg + gg + tg) % mod;
    acg[TA] = (at + ct + gt + tt) % mod;
    //+C
    acg[AC] = (aa + ca + ga + ta) % mod;
    acg[CC] = (ac + cc + gc + tc) % mod;
    acg[GC] = (   + cg + gg + tg) % mod;
    acg[TC] = (at + ct + gt + tt) % mod;
    //+G
    acg[AG] = (aa +    + ga + ta) % mod;
    acg[CG] = (   + cc + gc + tc) % mod;
    acg[GG] = (ag + cg + gg + tg) % mod;
    acg[TG] = (at + ct + gt + tt) % mod;

    acg[AT] = (aa + ca + ga + ta) % mod;
    acg[CT] = (ac + cc + gc + tc) % mod;
    acg[GT] = (ag + cg + gg + tg) % mod;
    acg[TT] = (at + ct + gt + tt) % mod;
    for(int i = 0; i < 16; i++){
      //cout << acg[i] << endl;
    }
  }
  long long ans = 0;
  for(int i = 0; i < 16; i++){
    cout << acg[i] << endl;
    ans = (ans + acg[i]) % mod;
  }
  cout << ans << endl;
}
