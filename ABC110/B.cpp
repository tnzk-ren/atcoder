#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  vector<int> vx(N);
  vector<int> vy(M);

  for(int i = 0; i < N; i++){
    cin >> vx[i];
  }
  for(int i = 0; i < M; i++){
    cin >> vy[i];
  }

  bool xflag = false;
  bool yflag = false;
  for(int i = X+1; i <= Y; i++){
    bool xflag = true;
    bool yflag = true;
    for(int j = 0; j < N; j++){
      if(vx[j] >= i){
        xflag = false;
      }
    }
    for(int j = 0; j < M; j++){
      if(vy[j] < i){
        yflag = false;
      }
    }
    if(xflag && yflag){
      cout << "No War" << endl;
      return 0;
    }
  }

  cout << "War" << endl;
  return 0;
}
