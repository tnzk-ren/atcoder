#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, D;
    cin >> N >> D;
    vector <int> vx(N);
    for(int i = 0; i < N; i++){
        cin >> vx[i];
    }


    int cnt = 0;
    int r = 0;
    for(int l = 0; l < N; l++){
        while((vx[r] - vx[l]) <= D){
            r++;
        }
        int rt = r;
        while(rt < N){
            for(int i = l; i < rt; i++){
                if((vx[i] - vx[l]) <= D && (vx[rt] - vx[i]) <= D){
                    cnt++;
                    //cout << r << " " << i << " " << l <<endl;
                }
            }
            rt++;
        }
    }

    cout << cnt << endl;
    return 0;

}
