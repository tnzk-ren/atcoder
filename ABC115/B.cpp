#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<int> vi(N);
  for(int& x : vi){
    cin >> x;
  }
  int max = *max_element(vi.begin(), vi.end());
  int sum = accumulate(vi.begin(), vi.end(), 0);
  cout << sum - max / 2 << endl;
  return 0;
}
