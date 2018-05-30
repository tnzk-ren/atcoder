#include <iostream>

int main(void)
{
  int field[300][300] = {0};
  int H, W, D;
  int iary[90000] = {0};
  int jary[90000] = {0};

  std::cin >> H >> W >> D;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int A;
      std::cin >> A;
      field[i][j] = A;
      iary[A] = i;
      jary[A] = j;
    }
  }
  int Q;
  std::cin >> Q;
  for(int q = 0; q < Q; q++){
    int L, R;
    std::cin >> L >> R;
    int sumMagic = 0;
    while(L != R){
      int x = iary[L] - iary[L+D];
      int y = jary[L] - jary[L+D];
      x = x >= 0 ? x : -1 * x;
      y = y >= 0 ? y : -1 * y;
      sumMagic += x + y;
      
      L += D;
    }
    std::cout << sumMagic << std::endl;
  }
  return 0;
}
