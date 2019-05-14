#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  double T, A;
  cin >> T >> A;
  double min = 20000;
  int t;
  for(int i = 0; i < N; i++){
    double x;
    cin >> x;
    if(abs(A - (T - x * 0.006)) < min){
      t = i+1;
      min = abs(A - (T - x * 0.006));
    }
  //cout << abs(A - (T - x * 0.006)) << endl;
  }
  cout << t << endl;
}
