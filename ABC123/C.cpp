#include <bits/stdc++.h>

using namespace std;
typedef long long lint;

lint l_ceil(lint a, lint b)
{
    return (lint)ceil((long double)a / b);
}
int main(void)
{
    lint a[5];
    lint N;
    cin >> N;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    lint sum = 0;
    lint times = l_ceil(N, a[0]);
    lint max = times;
    for(int i = 1; i < 5; i++){
        times = l_ceil(N, a[i]);
        if(max < times){
            max = times;
        }
    }
    cout << max + 4 << endl;
    
}