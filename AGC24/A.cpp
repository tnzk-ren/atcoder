#include <iostream>

using namespace std;

typedef long long lint;

int main(void)
{
    lint A, B, C, K;
    cin >> A >> B >> C >> K;

    lint sub = 0;
    if(K % 2 == 0){
        sub = A - B;
    }
    else{
        sub = B - A;
    }
    if(abs(sub) >= 1e18){
        cout << "Unfair" << endl;
    }else{
        cout << sub << endl;
    }
    return 0;
}
