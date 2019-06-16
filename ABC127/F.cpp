#include<bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int Q;
    int min_x;
    int min_fx;
    int sum = 0;
    int n_1 = 0;
    int min_i;
    for(int i = 0; i < N; i++){
        int q;
        if(q == 2){
            cout << min_x << " " << min_fx << endl;
            continue;
        }
        n_1++;
        int a, b;
        cin >> a >> b;
        min_fx += b;
        sum += a;
        int mid = (n_1+1) / 2;
        if(min_x < a){
            if(min_i == mid){
                min_fx += abs(min_x - a);
            }
            else{

            }
        }



    }
    return 0;
}