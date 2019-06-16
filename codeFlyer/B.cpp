#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a, b, N;
    string X;
    cin >> a >> b >> N;
    cin >> X;
    for(int i = 0; i < N; i++){
        if(X[i] == 'S'){
            a--;
        }else if(X[i] == 'C'){
            b--;
        }else if(X[i] == 'E'){
            if(a >= b){
                a--;
            }else{
                b--;
            }
        }
    }
    if(a < 0){
        a = 0;
    }
    if(b < 0){
        b = 0;
    }
    cout << a << endl << b << endl;
    return 0;
}
