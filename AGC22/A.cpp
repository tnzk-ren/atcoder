#include<iostream>
#include<string>

using namespace std;

int vocToNum(char s)
{
  char voc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  for(int i = 0; i < 26; i++){
    if(s == voc[i]){
      return i;
    }
  }
}

void printStr(string str, int n)
{
  for(int i = 0; i < n; i++){
    cout << str[i];
  }
}

int main(void)
{
  char voc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int vocFlag[26] = {0};
  string str;
  cin >> str;
  for(int i = 0; i < len(str); i++){
    vocFlag[vocToNum(str[i])] = 1;
  }
  for(int i = 0; i < 26; i++){
    if(vocFlag[i] == 0){
      cout << str << voc[i] << endl;
      return 0;
    }
  }
  for(int i = len(str) - 1; i >= 0; i--){
    for(int j = vocToNum(str[i]) + 1; j < 26; i++){
      if(vocFlag[j] == 0){
        printStr(str, i);
        cout << voc[j] << endl;;
        return 0;
      }
    }
    vocFlag[vocToNum[str[i]]] =  0;
  }
  cout << -1 << endl;
  return 0;
}
