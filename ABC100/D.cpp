#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
typedef long long lint;

struct vec{
  lint x;
  lint y;
  lint z;
};
lint deepcomb(vector<lint> &vx, vector<lint> &vy, vector<lint> &vz, struct vec v, int n, int M, int l){
  if(l == 0){
    lint sum = abs(v.x) + abs(v.y) + abs(v.z);
  //  cout << abs(v.x) << " " << abs(v.y) << " "<< abs(v.z) << endl;
    return sum;
  }
  lint max = 0;
  for(int i = n; i < vx.size() - l + 1; i++){
    struct vec v2;
    v2.x = v.x + vx[i];
    v2.y = v.y + vy[i];
    v2.z = v.z + vz[i];
    lint num = deepcomb(vx, vy, vz, v2, i+1, M, l-1);
    if(num > max){
      max = num;
    }
  }
  return max;
}

int main(void)
{
  int N, M;

  cin >> N >> M;
  vector<lint> vx(N);
  vector<lint> vy(N);
  vector<lint> vz(N);

  for(int i = 0; i < N; i++){
    cin >> vx[i] >> vy[i] >> vz[i];
  }

  struct vec v;
  v.x = 0;
  v.y = 0;
  v.z = 0;
  cout << deepcomb(vx, vy, vz, v, 0, M, M) << endl;
  return 0;
}
