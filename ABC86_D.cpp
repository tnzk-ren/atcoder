#include <iostream>
#include <vector>

int main(void)
{
  int N, K;
  std::vector<int> vx;
  std::vector<int> vy;
  std::vector<char> vc;
  std::cin >> N >> K;
  for(int i = 0; i < N; i++){
    int x, y;
    char c;
    std::cin >> x >> y >> c;
    vx.push_back(x);
    vy.push_back(y);
    vc.push_back(c);
  }
  int max = 0;
  for(int i = 0; i < K; i++){
    for(int j = 0; j < K; j++){
      int count = 0;
      for(int l = 0; l < N; l++){
        if(vc[l] == 'B'){
          if((vx[l]+i) % (K*2) < 3 && (vy[l]+j) % (K*2) < 3){
            count++;
          }else if((vx[l]+i) % (K*2) >= 3 && (vy[l]+j) % (K*2) >= 3){
            count++;
          }
        }
        if(vc[l] == 'W'){
          if((vx[l]+i) % (K*2) < 3 && (vy[l]+j) % (K*2) >= 3){
            count++;
          }else if((vx[l]+i) % (K*2) >= 3 && (vy[l]+j) % (K*2) < 3){
            count++;
          }
        }
      }
      if(max < count) max = count;
      count = 0;
      for(int l = 0; l < N; l++){
        if(vc[l] == 'W'){
          if((vx[l]+i) % (K*2) < 3 && (vy[l]+j) % (K*2) < 3){
            count++;
          }else if((vx[l]+i) % (K*2) >= 3 && (vy[l]+j) % (K*2) >= 3){
            count++;
          }
        }
        if(vc[l] == 'B'){
          if((vx[l]+i) % (K*2) < 3 && (vy[l]+j) % (K*2) >= 3){
            count++;
          }else if((vx[l]+i) % (K*2) >= 3 && (vy[l]+j) % (K*2) < 3){
            count++;
          }
        }
      }
      if(max < count) max = count;
    }
  }
  std::cout << max << std::endl;
}
