#include <iostream>

using namespace std;

int main(void)
{
  int N, H, W;
  cin >> N >> H >> W;
  int hlen = N-H+1;
  int wlen = N-W+1;
  cout << hlen * wlen << endl;

  return 0;
}
