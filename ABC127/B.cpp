#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int r, D, x;
    cin >> r >> D >> x;
    int xx = x;
    for(int i = 0; i < 10; i++){
        xx = r * xx - D;
        cout << xx << endl;
    }
    return 0;
}