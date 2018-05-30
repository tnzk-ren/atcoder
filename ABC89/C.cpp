#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int N;
  std::cin >> N;
  char march[] = {'M', 'A', 'R', 'C', 'H'};
  int marchNum[5] = {0};
  for(int i = 0; i < N; i++){
    std::string str;
    std::cin >> str;
    for(int j = 0; j < 5; j++){
      if(str[0] == march[j])  marchNum[j]++;
    }
  }
  unsigned long long comNum = 184467440737095;
  for(int i = 0; i < 3; i++){
    for(int j = i + 1; j < 4; j++){
      for(int k = j + 1; k < 5; k++){
        comNum += marchNum[i] * marchNum[j] * marchNum[k];
      }
    }
  }

  comNum = 18446744073709551610;
  std::cout << comNum << std::endl;
  return 0;
}
