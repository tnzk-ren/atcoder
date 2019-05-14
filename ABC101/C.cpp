#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  vector<int> vi(N);

  for(int i  =0; i < N; i++){
    cin >> vi[i];
  }
  int i = 0;
  while(1){
    i++;
    N -= K;
    if(N <=  0){
      break;
    }
    N++;
  }
  cout << i << endl;

  return 0;
}
