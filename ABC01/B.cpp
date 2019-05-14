#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double dist;

    cin >> dist;

    dist = dist / 1000;
    if(dist < 0.1){
        cout << 0 << 0 << endl;
    }else if(dist <= 5){
        cout << setfill('0') << setw(2) << static_cast<int>(dist*10) << endl;
    }else if(dist <= 30){
        cout << static_cast<int>(dist) + 50 << endl;
    }else if(dist <= 70){
        cout << (static_cast<int>(dist)-30)/5+80 << endl;
    }else{
        cout << 89 << endl;
    }

    return 0;
}
