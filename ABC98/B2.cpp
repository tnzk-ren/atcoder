#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    string str;
    cin >> N;
    cin >> str;
    int max = 0;

    for(int i = 1; i < N-1; i++){
        string strA = "";
        string strB = "";
        for(int j = 0; j < i; j++){
            strA += str[j];
        }
        for(int j = i; j < N; j++){
            strB += str[j];
        }
        char ch = 'a';
        int cnt = 0;
        for(int j = 0; i < 26; i++){
            bool aflag = false;
            for(int k = 0; k < strA.size(); k++){
                if(ch == strA[k]){
                    aflag = true;
                    break;
                }
            }
            if(!aflag){
                continue;
            }
            bool bflag = false;
            for(int k = 0; k < strB.size(); k++){
                if(ch == strB[k]){
                    bflag = true;
                    break;
                }
            }
            if(aflag & bflag){
                cnt++;
            }
            ch = (char)(ch+1);
        }
        if(max < cnt){
            max = cnt;
        }
    }

    cout << max << endl;
    return 0;
}
