#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int A[5];
    for(int i = 0; i < 5; i++){
        cin >> A[i];
    }
    int min = 10;
    int num = -1;
    for(int i = 0; i < 5; i++){
        int t = (A[i]-1) % 10;
        if(min > t){
            min = t;
            num = i;
        }
    }

    int sum = 0;
    for(int i = 0; i < 5; i++){
        if(i != num){
            
            int ten;
            if(A[i] % 10 == 0){
                ten = (A[i]);
            }else{
                ten = (A[i] / 10 + 1) * 10;
            }
            sum += ten;
        } 
    }
    sum += A[num];
    cout << sum << endl;

}