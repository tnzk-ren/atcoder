#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int num)
{
    if(num < 2)
        return false;
    else if(num == 2)
        return true;
    else if(num % 2 == 0)
        return false;

    double root = sqrt(num);
    for(int i = 3; i <= root; i += 2){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int sum_comb(vector<int> &vi, int start, int num, int sum)
{
    if(num == 0){
    //    cout << sum << endl;
        return isPrime(sum);
    }
    for(int i = start; i < vi.size(); i++){
        if(sum_comb(vi, start+1, num-1, sum+vi[i])){
            return false;
        }
    }
    return true;
}

bool prime_comb(vector<int> &vp, vector<int> vi, int start, int num)
{
    if(num == 0){
        if(sum_comb(vi, 0, 5, 0)){
            cout << vi[0];
            for(int i = 1; i < vi.size(); i++){
                cout << " " << vi[i];
            }
            cout << endl;
            return true;
        }
        else{
            return false;
        }
    }
    for(int i = start; i < vp.size(); i++){
        vi.push_back(vp[i]);
        if(prime_comb(vp, vi, start+1, num-1)){
            return true;
        }
        vi.pop_back();
    }
    return false;
}

int main(void)
{
    int N;
    cin >> N;

    vector<int> vp;

    for(int i = 2; i <= 55555; i++){
        if(isPrime(i)){
            vp.push_back(i);
        }
    }
    vector<int> vi(N);
    for(int i = 0; i < N; i++){
        vi[i] = vp[i];
    }
    //prime_comb(vp, vi, 0, N);
    for(int i = 0; i < vp.size()-N; i++){
        if(sum_comb(vi, 0, 5, 0)){
            cout << vi[0];
            for(int i = 1; i < vi.size(); i++){
                cout << " " << vi[i];
            }
            cout << endl;
            break;
        }
        vi[i%N] = vp[N+i];
    }


    return 0;

}
