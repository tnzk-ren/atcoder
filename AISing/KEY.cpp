/*
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str;
  cin >> str;
  string key = "keyence";
  int key_i = 0;

  for(int i = 0; i < str.size(); i++){
    if(str[i] != key[key_i]){
      break;
    }
    key_i++;
  }
  string match = "";
  for(int i = key_i; i < key.size(); i++){
    match += key[i];
  }
  if(match == ""){
    cout << "YES" << endl;
    return 0;
  }
  int start = str.size() - match.size();
  for(int k = 0; k < match.size(); k++){
  //  cout << str[i+k] << " " << match[k] << endl;
    if(str[start+k] != match[k]) break;
    if(k == match.size()-1){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
*/
#include<iostream>
#include<string>
#include<algorithm>

int main() {
	std::string str,sss="keyence";
	std::cin >> str;

	//文字列に連続して"keyence"が含まれる場合
	//findの戻り値 -1 が不穏　　環境によって変わりそう

	if (-1 != (int)str.find("keyence")) {
		std::cout << "YES" << std::endl;
		exit(1);
	}


	//文字が飛んでkeyence型文字が成立する場合
	//先頭がk以外で成立する場合は上で完結
	//よって先頭に"k--"が存在し、どこかで区切れて"残り"が現れるようにする

	for (int i = 0; i < 6; i++) {
		if ((0 == (int)str.find(sss.substr(0, 1 + i))) &&( -1 != (int)str.find(sss.substr(1+i,6-i))) ){
			std::cout << "YES" << std::endl;
			exit(2);
		}
	}

	std::cout << "NO" << std::endl;
	return 0;
}
