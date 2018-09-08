#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long euclid(long a, long b)
{
  while(1){
    if(a < b){
      long temp;
      temp = a;
      a = b;
      b = temp;
    }
    if(!b) break;
    a %= b;
  }
  return a;
}

int main(void)
{
  long N, X;
  cin >> N >> X;
  vector<long> vi(N+1);
  for(int i = 0; i < N; i++){
    cin >> vi[i];
  }
  vi[N] = X;
  sort(vi.begin(), vi.end());
  long a = vi[1] - vi[0];
  long b;
  for(int i = 1; i < N; i++){
    b = vi[i+1] - vi[i];
    a = euclid(a, b);
  }
  cout << a << endl;
  return 0;
}
