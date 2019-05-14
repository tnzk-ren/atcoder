#include <bits/stdc++.h>

using namespace std;

typedef long long lint;

lint countBit(lint x, lint b)
{
  // 1, 2, 4 => 2, 4, 8;
  lint cnt = 0;
  lint s = b * 2;
  if(x >= s){
    lint a = x / s;
    x -= s * a;
    a = a * b;
    cnt = a;
  }
  x -= b;
  if(x <= 0){
    return cnt;
  }
  else{
    return cnt + x;
  }
}

int main(void)
{
  lint A, B;
  cin >> A >> B;
  lint ans = 0;
  for(lint i = 1; i <= B+1; i*=2){
    //cout << i << endl;
    lint num = countBit(B+1, i) -  countBit(A, i);
    //lcout << countBit(B+1, i) << " " << countBit(A, i) << endl;
    if(num % 2 == 1)
      ans += i;
  }
  cout << ans << endl;
}
