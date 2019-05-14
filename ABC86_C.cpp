#include<iostream>

int main(void)
{
  int N;
  int x0 = 0;
  int y0 = 0;
  int t0 = 0;
  bool flag = false;
  std::cin >> N;
  for(int i = 0; i < N; i++){
    int t, x, y;
    std::cin >> t >> x >> y;
    int disX = std::abs(x - x0);
    int disY = std::abs(y - y0);
    int uc_dis = disX + disY;
    int subT = t - t0;
    if(uc_dis > subT){
      flag = true;
    }
    else if((uc_dis - subT) % 2 != 0){
      flag = true;
    //s  std::cout << x << y <<  uc_dis << std::endl;
    }
    x0 = x;
    y0 = y;
    t0 = t;
    //
  }
  if(flag){
    std::cout << "No" << std::endl;
  }else{
    std::cout << "Yes" << std::endl;
  }
}
