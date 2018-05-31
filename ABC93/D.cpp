#include<iostream>

using namespace std;

int main(void)
{
    typedef unsigned long long lint;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        lint a, b;
        cin >> a >> b;
        if(a > b){
            lint temp = a;
            a = b;
            b = temp;

        }
        lint score = a * b;
        lint top = 1;
        lint under = score;
        lint cnt = 0;
        while(1){
            //cout << top << " " << under << endl;
            if(top == a){
                top++;
                continue;
            }
            if(under == b){
                under--;
                continue;
            }
            if(top * under < score){
                cnt++;
                top++;
                under--;
            }else{
                under--;
            }
            if(top == score || under == 0){
                break;
            }
        }
        cout << cnt << endl;
    }
}
