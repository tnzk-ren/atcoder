#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  string str;
  cin >> str;

  for(int i = 0; i < str.size(); i++){
    string s;
    if(str[i] == 'A') s = "T";
    else if(str[i] == 'C') s = "G";
    else if(str[i] == 'G') s = "C";
    else if(str[i] == 'T') s = "A";
    cout << s;
  }
  cout << endl;
}
