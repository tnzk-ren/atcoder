#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    string str;

    cin >> N;
    cin >> str;

    int min = N;
    int cnt = 0;
    for(int i = 1; i < N; i++){
        if(str[i] == 'E'){
            cnt++;
        }
    }
    if(min > cnt){
        min = cnt;
    }
    for(int i = 1; i < N; i++){
        if(str[i] == 'E'){
            cnt--;
        }
        if(str[i-1] == 'W'){
            cnt++;
        }
        if(cnt < min){
            min = cnt;
        }
    }
    cout << min << endl;
    return 0;
}
