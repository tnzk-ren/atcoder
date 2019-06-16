#include<iostream>
#include<vector>

int main(void)
{
  int N, K;
  std::cin >> N >> K;
  std::vector<std::vector<int> > vxy(2*K, std::vector<int>(2*K, 0));
//  vxy = std::vector<std::vector<int> >(K, std::vector<int>(K, 0))
  for(int i = 0; i < N; i++){
    int x, y;
    char c;
    std::cin >> x >> y >> c;
    if(c == 'B'){
      vxy[x % (2*K)][y % (2*K)] = 1;

    }else{
      vxy[x % (2*K)][(y+K) % (2*K)] = 1;
    }
  }
  /*
  for(int i = 0; i < 2*K; i++){
    for(int j = 0; j < 2*K; j++){
      vxy[i][j] += vxy[j][i];
    }
  }
  for(int i = 0; i < 2*K; i++){
    for(int j = 0; j < 2*K; j++){
      std::cout << vxy[i][j] << "";
    }
    std::cout << std::endl;
  }*/
  int max = 0;
  for(int i = 0; i < 2 * K; i++){
    for(int j = 0; j < 2*K; j++){
      int count = 0;
      for(int k = 0; k < K; k++){
        for(int l = 0; l < K; l++){
          count += vxy[(k+i)%(2*K)][(l+j)%(2*K)];
        }
      }
      if(max < count) max = count;
    }
  }
  std::cout << max << std::endl;
}
