#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int A, B;
  cin >> A >> B;
  int P;
  int Acnt = 0;
  int Bcnt = 0;
  int Ccnt = 0;
  for(int i = 0; i < N; i++){
    cin >>P;
    if(P<=A) Acnt++;
    else if(P<=B) Bcnt++;
    else Ccnt++;
  }
  cout << min({Acnt, Bcnt, Ccnt}) << endl;
  return 0;
}
