#include <bits/stdc++.h>

using namespace std;
typedef long long lint;
 
int main(void)
{
    lint x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<lint> a(x);
    vector<lint> b(y);
    vector<lint> c(z);

    for(int i = 0; i < x; i++){
        cin >> a[i];
    }
    for(int i = 0; i < y; i++){
        cin >> b[i];
    }
    for(int i = 0; i < z; i++){
        cin >> c[i];
    }
    vector<lint> xy(x*y);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            xy[i*y+j] = a[i] + b[j];
        }
    }
    sort(xy.begin(), xy.end(), greater<lint>());
    sort(c.begin(), c.end(), greater<lint>());
    lint k2 = min(x*y, k);
    vector<lint> xyz(k2*z);
    for(int i = 0; i < k2; i++){
        for(int j = 0; j < z; j++){
            xyz[i*z+j] = xy[i] + c[j];
            //cout << i*z+j << endl;
        }
    }
    sort(xyz.begin(), xyz.end(), greater<lint>());
    for(int i = 0; i < k; i++){
        cout << xyz[i] << endl;
    }
}