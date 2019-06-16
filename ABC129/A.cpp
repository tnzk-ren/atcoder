#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int P, Q, R;
    cin >> P >> Q >> R;
    int maxim = max({P, Q, R});
    int sum = P + Q + R;
    cout << sum - maxim << endl; 
    return 0;
}