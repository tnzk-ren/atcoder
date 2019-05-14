#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> sumA(N);
    vector<int> sumX(N);

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    sumA[0] = a[0];
    sumX[0] = a[0];
    for(int i = 1; i < N; i++){
        sumA[i] = sumA[i-1] + a[i];
        sumX[i] = sumX[i-1] ^ a[i];
    }
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int xorN = sumX[j] - sumX[i];
            int sumN = sumA[j] ^ sumA[i];
            if(sumN == xorN){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

}
