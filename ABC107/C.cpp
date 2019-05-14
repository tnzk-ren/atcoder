#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, K;
  int min = (int)10e8;
  cin >> N >> K;

  vector<int> vx(N);

  for(int i = 0; i < N; i++){
    cin >> vx[i];
  }

  for(int i = 0; i < N - K + 1; i++){
    int left = vx[i];
    int right = vx[i+K-1];
    int num = 0;
    if(left <= 0 && right <= 0){
      num = -left;
    }
    else if(left <= 0 && right >= 0){
      if(-left < right){
        num = -left * 2 + right;
      }
      else{
        num = -left + right * 2;
      }
    }
    else if(left >= 0 && right >= 0){
      num = right;
    }
    if(num < min){
      min = num;
    }
    //cout << left << " " << right << " " << num << endl;
  }

  cout << min << endl;

}
