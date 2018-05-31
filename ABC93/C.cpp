#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    int mx = max(max(a, b), c);
    while(a < mx){
        a += 2;
        cnt++;
    }
    if(a > mx) {
        a -= 2;
        cnt--;
    }
    while(b < mx){
        b += 2;
        cnt++;
    }
    if(b > mx){
        b -= 2;
        cnt--;
    }
    while(c < mx){
        c += 2;
        cnt++;
    }
    if(c > mx) {
        c -= 2;
        cnt--;
    }
    if(a == b && b == c){
        cout << cnt << endl;
    }
    else if((mx*3 - a - b - c) == 2){
        cout << cnt + 1 << endl;
    }else{
        cout << cnt + 2 <<endl;
    }
    return 0;
}
