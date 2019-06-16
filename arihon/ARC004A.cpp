#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    int x[100];
    int y[100];

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    double max = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            double dist = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if(dist > max)
                max = dist;
        }
    }
    cout << max << endl;
}
