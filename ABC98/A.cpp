#include <iostream>
#include <cmath>


using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if(sum < a - b){
        sum = a - b;
    }
    if(sum < a * b){
        sum = a * b;
    }

    cout << sum << endl;

    return 0;
}
