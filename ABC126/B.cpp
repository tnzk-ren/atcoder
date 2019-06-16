#include <bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int S;
    cin >> S;
    int fw = S / 100;
    int bk = S - fw * 100;
    if(fw <= 12 && fw > 0){
        if(bk > 12 || bk <= 0){
            cout << "MMYY" << endl;
        }else{
            cout << "AMBIGUOUS" << endl;
        }
    }else{
        if(bk > 12 || bk <= 0){
            cout  << "NA" << endl;
        }else{
            cout << "YYMM" << endl;
        }
    }
    return 0;
}