#include<iostream>
#include <cmath>

using namespace std;

int main(void)
{
    typedef unsigned long long lint;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        lint a, b;
        cin >> a >> b;
        if(a > b){
            lint temp = a;
            a = b;
            b = temp;

        }
        lint score = a * b;
        lint top = 1;
        lint under = score;
        lint cnt = 0;
        lint rt = sqrt(score);
        lint x = rt;
        if(rt * rt == score){
            x--;
        }
        lint y = x * 2;
        if(a <= x){
            y--;
        }
        if(b <= x){
            y--;
        }
        cout << y << endl;
    }
}
