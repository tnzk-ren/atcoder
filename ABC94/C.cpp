#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> vx(N);
    vector<int> x(N);
    for (int i = 0; i < N; i++){
        cin >> vx[i];
        x[i] = vx[i];
    }
    sort(vx.begin(), vx.end());
    int medL = vx[(N-1)/2];
    int medH = vx[N/2];
    double medM = (medL + medH) / 2.0;
    //cout << medL << " " << medH << " " << medM << endl;
    for(int i = 0; i < N; i++){
        if(x[i] < medM){
            cout << medH << endl;
        }else{
            cout << medL << endl;
        }
    }
    return 0;
}
