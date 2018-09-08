#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<string>  vs(N);
  for(int i = 0; i < N; i++){
    cin >> vs[i];
  }
  for(int i = 1; i < N; i++){
    if(vs[i-1].back() != vs[i].front()){
      cout << "No" << endl;
      return 0;
    }
    for(int j = 0; j < i; j++){
      if(vs[j] == vs[i]){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
