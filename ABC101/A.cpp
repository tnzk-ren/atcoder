#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str;
  int num = 0;

  cin >> str;
  for(int i = 0; i < str.size(); i++){
    if(str[i] == '+'){
      num++;
    }else{
      num--;
    }
  }

  cout << num << endl;
  return 0;
}
