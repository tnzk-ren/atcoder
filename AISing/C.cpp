#include <iostream>
#include <vector>

using namespace std;

char map[400][400];
bool loadmap[400][400];
int H, W;

int gomap(int x, int y, char my)
{
  if(loadmap[y][x] == true){
    return 0;
  }
  loadmap[y][x] = true;
  //cout << x <<" " << y << " " << my << " " << map[y][x] << endl;
  int num = 0;
  if(my == map[y][x]){
    num +=  0;
  }
  else{
    num += 1;
  }
  if(x+1 < W && (map[y][x+1] != map[y][x])){
    num += gomap(x+1, y, my);
  }
  if(y+1 < H && (map[y+1][x] != map[y][x]))
    num += gomap(x, y+1, my);
  return num;
}

int main(void)
{
  cin >> H >> W;

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> map[i][j];
    }
  }
  int my = 0;
  int sum = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      for(int l = 0; l < H; l++){
        for(int k = 0; k < W; k++){
          loadmap[l][k] = false;
        }
      }
      sum += gomap(j, i, map[i][j]);
      //cout << sum << endl;
    }
  }

  cout << sum << endl;
  return 0;
}
