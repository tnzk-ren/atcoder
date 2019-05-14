#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int n = 0;
  cin >> n;
  vector<int> h(n);

  for(int i = 0; i < n; i++){
    cin >> h[i];
  }

  int cnt = 0;
  while(1){
    int zero_cnt = 0;
    for(int i = 0; i < n; i++){
      if(h[i] != 0){
        h[i]--;
        if(i == n-1 || h[i+1] == 0){
          cnt++;
        }
      }else{
        zero_cnt++;
      }
    }
    if(zero_cnt == n){
      break;
    }

  }
  cout << cnt << endl;
  return 0;
}
