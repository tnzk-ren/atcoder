#include<iostream>

using namespace std;

int main(void)
{
    int N;
    int Y;
    cin >> N >> Y;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N - i; j++){
            int man = i;
            int gos = j;
            int sen = (N - i - j);
            if(man * 10000 + gos * 5000 + sen * 1000 == Y){
                cout << man << ' ' << gos << ' ' << sen << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
