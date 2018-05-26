#include <iostream>
#include <string>

using namespace std;

//アルファベットを数字（0~25）に変換する関数
int strToNum(char str)
{
    string sall = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++){
        if(str == sall[i]){
            return i;
        }
    }
}

int main(void)
{
    int N;
    cin >> N;
    string str;
    cin >> str;

    int max = 0;

    //strの各区切りの総当たり
    //アルファベットを数字に変換することで、疑似的な連想配列(map)を作っている。
    for(int i = 1; i < N-1; i++){
        //0~i-1までのa~zの個数をそれぞれカウント
        int cnt_alph1[26] = {0};
        for(int j = 0; j < i; j++){
            cnt_alph1[strToNum(str[j])]++;
        }

        //同じく、i~N-1までのa~zの個数をそれぞれカウント
        int cnt_alph2[26] = {0};
        for(int j = i; j < N; j++){
            cnt_alph2[strToNum(str[j])]++;
        }

        //a~zにおいて分割した文字列のどちらにもある文字を探しカウントアップ
        int cnt = 0;
        for(int k = 0; k < 26; k++){
            if(cnt_alph1[k] != 0 && cnt_alph2[k] != 0){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        }
    }

    cout << max << endl;
    return 0;
}
