#include <iostream>

using namespace std;

int main(void)
{
    int H, W;
    cin >> H >> W;

    char s[50][50];

    for(int j = 0; j < H; j++){
        for(int i = 0; i < W; i++){
            cin >> s[j][i];
        }
    }


    for(int j = 0; j < H; j++){
        for(int i = 0; i < W; i++){
            if(s[j][i] == '.'){
                continue;
            }
            if(i-1 >= 0 && s[j][i-1] == '#'){
                continue;
            }
            if(i+1 < W && s[j][i+1] == '#'){
                continue;
            }
            if(j-1 >= 0 && s[j-1][i] == '#'){
                continue;
            }
            if(j+1 < H && s[j+1][i] == '#'){
                continue;
            }
            cout << "No" << endl;
            return 0;
        }

    }
    cout << "Yes" << endl;
    return 0;
}
