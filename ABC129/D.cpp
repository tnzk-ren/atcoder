#include<bits/stdc++.h>

using namespace std;
using lint = long long;
#define MOD 1000000007

int main(void)
{
    int H, W;
    cin >> H >> W;
    vector<vector<char> > s(H, vector<char>(W));

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            char c;
            cin >> c;
            s[i][j] = c;
        }
    }

    vector<vector<int> > h_a(H, vector<int>(W));
    vector<vector<int> > w_a(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        lint cnt = 0;
        for(int j = 0; j < W; j++){
            if(s[i][j] == '.'){
                cnt++;
            }else{
                cnt = 0;
            }
            w_a[i][j] = cnt;
        }
    }
    for(int i = 0; i < H; i++){
        lint cnt = 0;
        for(int j = W-1; j >= 0; j--){
            if(w_a[i][j] != 0){
                if(cnt < w_a[i][j]){
                    cnt = w_a[i][j];
                }else{
                    w_a[i][j] = cnt;
                }
            }else{
                cnt = 0;
            }
        }
    }

    for(int j = 0; j < W; j++){
        lint cnt = 0;
        for(int i = 0; i < H; i++){
            if(s[i][j] == '.'){
                cnt++;
            }else{
                cnt = 0;
            }
            h_a[i][j] = cnt;
        }
    }
    for(int j = 0; j < W; j++){
        lint cnt = 0;
        for(int i = H-1; i >= 0; i--){
            if(h_a[i][j] != 0){
                if(cnt < h_a[i][j]){
                    cnt = h_a[i][j];
                }else{
                    h_a[i][j] = cnt;
                }
            }else{
                cnt = 0;
            }
        }
    }

    lint max = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            lint light = h_a[i][j] + w_a[i][j] - 1;
            if(max < light){
                max = light;
            }
        }
    }
    /*
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << w_a[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << h_a[i][j];
        }
        cout << endl;
    }
    */
    

    cout << max << endl;
    return 0;
}