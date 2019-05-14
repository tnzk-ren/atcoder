#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int a, b, K;
  cin >> a >> b >> K;
  int x = max(a, b);
  int cnt = 0;
  int stc = 0;
  for(int i = x; i >= 1; i--){
    if(a % i == 0 && b % i == 0){
      cnt++;
      stc = i;
      if(cnt == K){
        break;
      }
    }
  }
  cout << stc << endl;
  return 0;
}
