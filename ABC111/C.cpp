#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N;
  int v_max = -1;
  cin >> N;
  vector<int> v1(100000);
  vector<int> v2(100000);

  for(int i = 0; i < N; i++){
    int tmp = 0;
    cin >> tmp;
    if(i % 2 == 0){
      v1[tmp-1]++;
    }else{
      v2[tmp-1]++;
    }

    if(tmp > v_max){
      v_max = tmp;
    }
  }
  int max[2][2] = {{-1, -1}, {-1, -1}};
  int n_max[2][2];

  for(int i = 0; i < v_max; i++){

    if(v1[i] >= max[0][0]){
      max[0][1] = max[0][0];
      max[0][0] = v1[i];

      n_max[0][1] = n_max[0][0];
      n_max[0][0] = i;
    }
    else if(v1[i] >= max[0][1]){
      max[0][1] = v1[i];

      n_max[0][1] = i;
    }

    if(v2[i] >= max[1][0]){
      max[1][1] = max[1][0];
      max[1][0] = v2[i];

      n_max[1][1] = n_max[1][0];
      n_max[1][0] = i;
    }
    else if(v2[i] >= max[0][1]){
      max[1][1] = v2[i];

      n_max[1][1] = i;
    }
  }

  int cnt = 0;
  if(max[0][1] == -1 && max[1][1] == -1){
    cnt = N / 2;
  }
  else if(n_max[0][0] != n_max[1][0]){
    cnt = N - max[0][0] - max[1][0];
  }
  else{
    int max12 = max[0][0] + max[1][1];
    int max21 = max[1][0] + max[0][1];

    if(max12 > max21){
      cnt = N - max12;
    }else{
      cnt = N - max21;
    }
  }

  cout << cnt << endl;
  return 0;
}
