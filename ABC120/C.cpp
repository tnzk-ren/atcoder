#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  string S;
  cin >> S;
  int red = 0;
  int blu = 0;
  for(int i = 0; i < S.size(); i++){
    if(S[i] == '0')
      red++;
    else
      blu++;
  }
  cout << min(red, blu) * 2 << endl;
  return 0;
}
