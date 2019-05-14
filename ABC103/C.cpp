#include <iostream>

using namespace std;

int main(void)
{
  int sum = 0;
  int a;
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> a;
    sum += a-1;
  }
  cout << sum << endl;
  return 0;
}
