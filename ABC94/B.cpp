#include <iostream>

using namespace std;

int main(void)
{
    int N, M, x;
    int A[100] = {0};
    cin >> N >> M >> x;
    for(int i = 0; i < M; i++){
        int c;
        cin >> c;
        A[c] = 1;
    }
    int cost0 = 0;
    for(int i = x; i >= 0; i--){
        cost0 += A[i];
    }
    int costN = 0;
    for(int i = x; i < N; i++){
        costN += A[i];
    }
    if(cost0 < costN){
        cout << cost0 << endl;
    }else{
        cout << costN << endl;
    }
    return 0;

}
