#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, M;
  cin >> N >> M;
  vector<int> vi(N);
  for(int i = 0; i < N; i++){
    vi[i] = 0;
  }
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    vi[a-1] += b;
    vi[b-1] += -b;
  }
  int sum = 0;
  int flag = 0;
  int cnt = 0;
  for(int i = 0; i < N; i++){
    sum += vi[i];
    if(sum != 0){
      flag = 1;
    }
    if(sum == 0 && flag == 1){
      cnt++;
      flag = 0;
    }
  }
  cout << cnt << endl;
  return 0;
}
