#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int gsb[3][2];
    for(int i = 0; i < 2; i++){
        cin >>gsb[0][i] >> gsb[1][i] >> gsb[2][i];
    }
    double funcAB[3];
    double funcBA[3];
    for(int i = 0; i < 3; i++){
        funcAB[i] = (double)gsb[i][1] / gsb[i][0];
        funcBA[i] = (double)gsb[i][0] / gsb[i][1];
    }
    

    int max1 = 0;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N - i; j++){
            int k = N - i - j;
            int gold = (int)max(funcAB[0] * i, funcBA[0] * i);
            int silv = (int)max(funcAB[1] * j, funcBA[1] * j);
            int cup = (int)max(funcAB[2] * k, funcBA[2] * k);
            int sum = gold + silv + cup;
            if(sum > max1){
                max1 = sum;
            }
        }
    }
    cout << max1 << endl;

    return 0;
}