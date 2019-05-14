#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  string str;
  cin >> str;
  int min = 753;
  for(int i = 0; i < str.size() - 2; i++){
    string snum = str.substr(i, 3);
    int num = stoi(snum);
    if(min > abs(753 - num)){
      min = abs(753 - num);
    }
  }
  cout << min << endl;
  return 0;
}
