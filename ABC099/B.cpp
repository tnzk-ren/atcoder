#include <iostream>

using namespace std;

int main(void)
{
  int a, b;
  cin >> a >> b;
  int sub = b - a;

  int x = 0;
  for(int i = 0; i < sub; i++){
    x += i;
  }
  cout << x - a << endl;

  return 0;
}
