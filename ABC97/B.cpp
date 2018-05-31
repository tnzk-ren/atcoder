#include <iostream>
#include <cmath>

using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }

    return ans;
}
int main(void)
{
    int x;
    cin >> x;
    int max = 1;
    for(int i = 2; i <= sqrt(x); i++){
        for(int j = 2; power(i, j) <= x; j++){
            if(power(i, j) >= max){
                max = power(i, j);
            }

        }
    }
    cout << max << endl;
    return 0;
}
