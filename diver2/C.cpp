#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    deque<int> A;
    int minus = 0;
    int plus = 0;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        A.push_back(x);
        if(x > 0){
            plus++;
        }else{
            minus++;
        }
    }
    sort(A.begin(), A.end());
    int sum = 0;
    vector<pair<int, int>> ans(N-1);
    for(int i = 0; i < N-1; i++){
        
        int fwd = A.front();
        int bak = A.back();
        A.pop_front();
        A.pop_back();
        int mrg;
        if(A.size() == 0){
            int big = max(fwd, bak);
            int small = min(fwd, bak);
            mrg = big - small;
            A.push_back(mrg);
            ans[i].first = big;
            ans[i].second = small;
            break;
        }
        else if(minus > plus){
            mrg = bak - fwd;
            A.push_back(mrg);
            ans[i].first = bak;
            ans[i].second = fwd;
            plus++;
        }else{
            mrg = fwd - bak;
            A.push_front(mrg);
            ans[i].first = fwd;
            ans[i].second = bak;
            minus++;
        }
        if(fwd > 0){
            plus--;
        }else{
            minus--;
        }
        if(bak > 0){
            plus--;
        }else{
            minus--;
        }
    }
    cout << A[0] << endl;
    for(int i = 0; i < N-1; i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}