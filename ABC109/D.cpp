#include <iostream>

using namespace std;

int main(void)
{
  int H, W;
  int count = 0;
  int a[500][500]={0};
  cin >> H >> W;
  int cnt = H * W;
  for(int j = 0; j < H; j++){
    for(int i = 0; i < W; i++){
      cin >> a[j][i];
    }
  }
  bool flag = false;
  for(int j = 0; j < H; j++){
    int i = j % 2 == 0 ? 0 : W-1;
    int lim = j % 2 == 0 ? W : -1;
    int inc = j % 2 == 0 ? 1 : -1;
    while(1){
      cnt--;
      if(cnt == 0){
        break;
      }
      if(!flag){
        if(a[j][i] % 2 != 0){
          count++;
          flag = true;
        }
      }
      else{
        if(a[j][i] % 2 != 0){
          flag = false;
        }
        else{
          count++;
        }
      }
      i+=inc;
      if(i == lim){
        break;
      }
    }
  }
  cout << count << endl;
  
  cnt = H * W;
  flag = false;
  for(int j = 0; j < H; j++){
    int i = j % 2 == 0 ? 0 : W-1;
    int lim = j % 2 == 0 ? W : -1;
    int inc = j % 2 == 0 ? 1 : -1;
    while(1){
      cnt--;
      if(cnt == 0){
        if(flag){
          cout << j+1 << " " << i+1 << endl;
        }
        break;
      }
      if(!flag){
        if(a[j][i] % 2 != 0){
          cout << j+1 << " " << i+1 << " ";
          flag = true;
        }
      }
      else{
        cout << j+1 << " " << i+1 << endl;
        if(a[j][i] % 2 != 0){
          flag = false;
        }
        else{
          cout << j+1 << " " << i+1 << " ";
        }
      }
      i+=inc;
      if(i == lim){
        break;
      }
    }
  }

  return 0;
}
