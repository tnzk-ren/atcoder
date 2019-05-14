#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  double sum = 0;
  for(int i = 0; i < N; i++){
    double x;
    string u;
    cin >> x >> u;
    if(u == "BTC"){
      x = x * 380000.0;
    }
    sum += x;
  }
  cout << sum << endl;
  return 0;
}
