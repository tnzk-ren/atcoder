#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  string str;
  cin >> str;
  int max = 0;
  int cnt = 0;
  for(int i = 0; i < str.size(); i++){
    char s = str[i];
    if(s == 'A' || s == 'C' || s == 'G' || s == 'T'){
      //cout << s << endl;
      cnt++;
    }else{
      if(max < cnt){
        max = cnt;
      }
      cnt = 0;
    }
  }
  if(max < cnt ){
    max = cnt;
  }
  cout << max << endl;
}
