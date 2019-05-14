#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string s;
  string x;
  cin >> s;
  cin >> x;
  for(int i = 0; i < s.size(); i++){
    char tempC = s[0];
    for(int j = 1; j < s.size(); j++){
      s[j-1] = s[j];
    }
    s[s.size()-1] = tempC;
    if(s == x){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
