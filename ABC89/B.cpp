#include <iostream>

int main(void)
{
  int N;
  char c;
  char typeFlag[4] = {0};

  std::cin >> N;
  for(int i = 0; i < N; i++){
    std::cin >> c;
    if(c == 'P')
      typeFlag[0] = 1;
    else if(c == 'W')
      typeFlag[1] = 1;
    else if(c == 'G')
      typeFlag[2] = 1;
    else if(c == 'Y')
      typeFlag[3] = 1;
  }
  int typeNum = 0;
  for(int i = 0; i < 4; i++){
    typeNum += typeFlag[i];
  }

  if(typeNum == 3){
    std::cout << "Three" << std::endl;
  }else{
    std::cout << "Four" << std::endl;
  }
  return 0;
}
