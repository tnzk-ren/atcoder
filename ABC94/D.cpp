#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> vx(N);
    int max = 0;
    for(int i = 0; i < N; i++){
        cin >> vx[i];
        if(max < vx[i]){
            max = vx[i];
        }
    }
    double diff = max;
    double half = max / 2.0;
    int min = 0;
    for(int i = 0; i < N; i++){
        if(vx[i] == max) continue;
        if(diff > abs(vx[i] - half)){
            min = vx[i];
            diff = abs(vx[i] - half);
        }
    }
    cout << max << " " << min << endl;

    return 0;
}
