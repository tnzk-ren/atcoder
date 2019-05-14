#include <bits/stdc++.h>

using namespace std;

int check(int *a){
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    if(a[i] != 0){
      cnt++;
    }
  }
  return cnt;
}
int main(void)
{
  int N, M;
  cin >> N >> M;
  int nums[8] = {0};
  int mum2cost = {2, 5, 5, 4, 5, 6, 3, 7, 6};
  int min = 10;
  for(int i = 0; i < M; i++){
    int temp;
    cin >> temp;
    if(num2cost[temp-1] < min){
      min = num2cost[temp-1];
    }
    if(temp > nums[num2cost[temp-1]]){
      nums = num2cost[temp-1];
    }
  }
  int min_num = nuns[min];
  int digit = N / min;
  int over = N * min;
  int sub[8] = {0};
  int stk[10] = {0};
  stk[nums[min]] = digit;
  for(int j = 0; j < 8; j++){
    if(nums[j] == 0)
      continue;
    for(int i = j+1; i < 8; i++){
      if(nums[j] > nums[i]){
        nums[i] = 0;
      }
    }
  }
  int all_num = check(nums) - 1;

  return 0;
}
