#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  vector<int> vi(3);
  cin >> vi[0] >> vi[1] >> vi[2];
  sort(vi.begin(), vi.end());
  cout << abs(vi[0] - vi[1]) + abs(vi[1] - vi[2]) << endl;
  
  return 0;
}
