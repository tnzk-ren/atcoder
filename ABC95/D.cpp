#include <iostream>

using namespace std;

int main(void)
{
    int N, C;
    int x[10002] = {0};
    int v[10001] = {0};

    cin >> N >> C;
    for(int i = 0; i < N; i++){
        cin >> x[i+1] >> v[i+1];
    }
    x[N+1] = C;
    int last_cost = 0;
    int max_cost = 0;
    for(int i = 0; i < N; i++){
        int clor = last_cost + v[i+1] - (x[i+1] - x[i]);
        if(clor >= max_cost){
            max_cost = clor;
        }
        last_cost = clor;
    }
    last_cost = 0;
    int max_cost_rev = 0;
    for(int i = N; i > 0; i--){
        int clor = last_cost + v[i] - (x[i+1] - x[i]);
        if(clor >= max_cost_rev){
            max_cost_rev = clor;
        }
        last_cost = clor;
        //cout <<  v[i] <<" "<< x[i+1] <<" "<< x[i] << endl;
    }
    if(max_cost >= max_cost_rev){
        cout << max_cost << endl;
    }else{
        cout << max_cost_rev << endl;
    }

    return 0;
}
