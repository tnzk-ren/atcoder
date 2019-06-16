#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  string s;
  cin >> s;
  int red = 0;
  int blue = 0;
  for(int i = 0; i < N; i++){
    if(s[i] == 'R'){
      red++;
    }
    else{
      blue++;
    }
  }
  if(red > blue){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
