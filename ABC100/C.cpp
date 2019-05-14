#include <iostream>

using namespace std;

int main(void)
{
  int N;
  int a[10000];
  cin >> N;

  int cnt = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  for(int i = 0; i < N; i++){
    while(a[i] % 2 == 0){
      if(a[i] % 2 == 0){
        cnt++;
        a[i] /= 2;
      }
    }
  }

  cout << cnt << endl;
  return 0;

}
