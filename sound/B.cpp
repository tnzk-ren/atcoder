#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str;
  int w;
  cin >> str >> w;

  for(int i = 0; i < str.size(); i+=w){
    cout << str[i];
  }
  cout << endl;
  return 0;
}
