#include <iostream>
#include <vector>

typedef unsigned long long lint;
using namespace std;

int main(void)
{
  lint N = (lint)1e15;
  lint cnt = 0;
  lint n_nine = 1;
  lint n_top = 1;
  lint ten = 10;
  lint K;
  cin >> K;
  for(int i = 1; i < 10; i++){
    cout << i << endl;
    cnt++;
    if(cnt == K){
      return 0;
    }
  }
  while(1){
    lint sunuke = n_top * ten + n_nine * 9;
    lint i = n_top * ten + (n_nine-1) * 9;
    lint sn = 1;
    for(int j = i; j < sunuke; j+=n_nine){
      if(((double)j / sn) < sunuke){
        cout << j << endl;
      }
      sn += 1;
      cnt++;
      if(cnt == K){
        return 0;
      }
    }
    if(sunuke >= N){
      return 0;
    }
    cout << sunuke << endl;

    cnt++;
    if(cnt == K){
      return 0;
    }
    n_top++;
    if(n_top == 10){
      n_nine = n_nine * 10 + 1;
      n_top = 1;
      ten *= 10;
    }
  }
  return 0;
}
