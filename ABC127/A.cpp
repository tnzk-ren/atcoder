#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;
    if(A < 13){
        B /= 2;
        if(A <= 5){
            B = 0;
        }
    }

    cout << B << endl;
    return 0;
}