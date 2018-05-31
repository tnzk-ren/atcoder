#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    cin >> a >> b >> c;
    int k;
    cin >> k;

    int max = 0;
    if(a > max)
        max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;

    int sum = a + b + c - max;
    for(int i = 0; i < k; i++){
        max *= 2;
    }
    sum += max;

    cout << sum << endl;

    return 0;
}
