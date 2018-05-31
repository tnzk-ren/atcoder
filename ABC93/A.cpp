#include <iostream>

using namespace std;

int main(void)
{
    char a, b, c;
    cin >> a >> b >> c;
    if(a != b && b != c && c != a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
