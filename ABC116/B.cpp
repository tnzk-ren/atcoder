#include <iostream>

using namespace std;

int func(int n)
{
  if(n % 2 == 0){
    return n / 2;
  }else{
    return 3*n+1;
  }
}
int main(void)
{
  int s;
  cin >> s;

  int a1 = s;
  int ai = a1;
  for(int i = 2; ; i++){
    ai = func(ai);
    int aj = a1;
    for(int j = 1; j < i; j++){
      if(ai == aj){
        cout << i << endl;
        return 0;
      }
      aj = func(aj);
    }
  }
  return 0;
}
