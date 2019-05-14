#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int deepSrch(int nine, int six, int N, int cnt){
  int x;
  int y = 1;
  int z = 1;
  if(nine >= 9){
    x = nine;
    y = 9;
  }
  else if(six >= 6){
    x = six;
    z = 6;
  }
  else{
  //  cout << cnt + N;
    return cnt + N;
  }
  int min = 10000000;
  for(int i = 0; i < 6; i++){
    if(N - x * i < 0){
      break;
    }
    int count = deepSrch(nine / y, six / z, N - x * i, cnt+i);
    if(min > count){
      min = count;
    }
  }
  return min;
}

int main(void)
{
  int N;
  cin >> N;

  int one = 1;
  int six = 6;
  int nine = 9;
  while(nine < N){
    if(nine * nine > N){
      break;
    }
    else{
      nine *= nine;
    }
  }

  while(six < N){
    if(six * six > N){
      break;
    }
    else{
      six *= six;
    }
  }
  int cnt = deepSrch(nine, six, N, 0);
  cout << cnt << endl;

  return 0;

}
