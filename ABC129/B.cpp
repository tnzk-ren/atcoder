#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    int min = 0;
    cin >> N; 
    vector<int> W(N);
    for(int i = 0; i < N; i++){
        cin >> W[i];
        min += W[i];
    }

    min -= W[0];
    for(int i = 1; i < N; i++){
        int s1 = 0;
        for(int j = 0; j < i; j++){
            s1 += W[j];
        }
        int s2 = 0;
        for(int j = i; j < N; j++){
            s2 += W[j];
        }
        if(abs(s1 - s2) < min){
            min = abs(s1 - s2);
        } 
    }

    cout << min << endl;

    return 0;
}