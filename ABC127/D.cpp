#include<bits/stdc++.h>

using namespace std;
using lint = long long;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<pair<lint, lint> > A(N + M);
    for(int i = 0; i < N; i++){
        cin >> A[i].first;
        A[i].second = 1;
    }
    //vector<pair<lint, lint> > nums(M);

    for(int i = 0; i < M; i++){
        int b, c;
        cin >> b >> c;
        A[N+i].first = c;
        A[N+i].second = b;
                //nums[i].first = c;
        //nums[i].second = b;
    }
    
    sort(A.begin(), A.end(), greater<pair<lint, lint> >());
    //sort(nums.begin(), nums.end(), greater<pair<lint, lint> >());

    /*
    int ia = 0;
    int in = 0;
    int max_n = nums.size();
    lint sum = 0;
    for(int i = 0; i < N; i++){
        if(max_n <=  in && A[ia].first > nums[in].first){
            sum += A[ia];
            ia++;
        }
        else{
            sum += ch[ic];
            ic++;
        }
    }
    */

    lint sum = 0;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < A[i].second; j++){
            sum += A[i].first;
            cnt++;
            //cout << A[i].first << endl;
            if(cnt >= N){
                cout << sum << endl;
                return 0;
            }
        }
    }

    cout << sum << endl;


    return 0;
}