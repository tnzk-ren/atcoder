#include <iostream>

using namespace std;

typedef long long lint;
int main(void)
{
  lint N;
  cin >> N;
  lint tn = N;
  lint sn = 0;
  while(tn != 0){
    lint tmp = 0;
    sn += tn % 10;
    tn = tn / 10;
  }

  
  if(N % sn == 0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}
