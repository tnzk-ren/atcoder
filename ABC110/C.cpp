#include <iostream>
#include <string>
#include <vector>

using namespace std;

int strToNum(char c)
{
  string str = "abcdefghijklmnopqrstuvwxyz";
  for(int i = 0; i < str.size(); i++){
    if(c == str[i]){
      return i;
    }
  }
}

int main(void)
{
  string S, T;
  cin >> S;
  cin >> T;

  int Sflag[26];
  int Tflag[26];

  for(int i = 0; i < 26; i++){
    Sflag[i] = -1;
    Tflag[i] = -1;
  }


  vector<int> S2(S.size());
  vector<int> T2(T.size());

  int num = 0;
  for(int i = 0; i < S.size(); i++){
    if(Sflag[strToNum(S[i])] < 0){
      Sflag[strToNum(S[i])] = num;
    }
    S2[i] = Sflag[strToNum(S[i])];

    if(Tflag[strToNum(T[i])] < 0){
      Tflag[strToNum(T[i])] = num;
    }
    T2[i] = Tflag[strToNum(T[i])];
    num++;
  }

  for(int i = 0; i < S.size(); i++){
    if(S2[i] != T2[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
