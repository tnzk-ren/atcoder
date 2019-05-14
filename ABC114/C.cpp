#include <bits/stdc++.h>

using namespace std;
typedef long long lint;

lint cng(lint a)
{
  lint y = 0;
  for(int i = 1; a > 0; i*=10){
    lint x = a % 10;
    if(x == 1)
      x = 3;
    else if(x == 2)
      x = 5;
    else if(x == 3)
      x = 7;
    y += i * x;
    a /= 10;
  }
  //cout << y << endl;
  return y;
}

bool check_753(lint a)
{
  bool f1 = false, f2 = false, f3 = false;
  while(a > 0){
    lint x = a % 10;
    //if(x == 0) return false;
    if(x == 1) f1 = true;
    if(x == 2) f2 = true;
    if(x == 3) f3 = true;
    a /= 10;
  }
  if(f1 && f2 && f3)
    return true;
  else
    return false;
}

lint adder_753(lint a)
{
  lint y = 0;
  lint c = 0;
  lint dig = 1;
  for(int i = 1; a > 0; i*=10){
    lint x = a % 10 + c;
    if(x == 4){
      c = 1;
      x = 1;
    }else{
      c = 0;
    }
    a /= 10;
    y += x * i;
    dig = i;
  }
  y += dig * 10 * c;
  return y;
}

int main(void)
{
  lint N;
  cin >> N;
  lint cnt = 0;
  for(lint i = 123; cng(i) <= N; i=adder_753(i+1)){
    if(check_753(i)){
      cnt++;
      //cout << cng(i) << endl;
    }
  }
  cout << cnt << endl;
  return 0;
}
