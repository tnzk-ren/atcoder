#include <bits/stdc++.h>

using namespace std;
using lint = long long;

bool isOK(vector<lint> v, lint index, lint key)
{
    if(v[index] >= key)
        return true;
    else   
        return false;
}
int binary_search(vector<lint> v, lint key)
{
    int ng = -1;
    int ok = (int)v.size();

    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        if(isOK(v, mid, key))
            ok = mid;
        else 
            ng = mid;
    } 
    return ok;
}

lint calc_distance(lint q, lint t, lint s)
{
    if(q <= t && q <= s){
        return max(t, s) - q;
    }else if(q >= t && q >= s){
        return q - min(t, s);
    }else{
        lint minabs = min(abs(q - t),abs(q - s));
        return abs(q - t) + abs(q - s) + minabs; 
    }
}
int main(void)
{
    lint A, B, Q;
    cin >> A >> B >> Q;
    vector<lint> s(A);
    vector<lint> t(B);
    for(auto &x: s){
        cin >> x;
    }
    for(auto &x: t){
        cin >> x;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    for(int i = 0; i < Q; i++){
        lint q;
        cin >> q;
        //lint i_sh = lower_bound(s.begin(), s.end(), q) - s.begin();
        lint i_sh = binary_search(s, q);
        //cout << i_sh << endl;
        lint i_sl = i_sh -1;
        if(i_sl < 0) i_sl = 0;
        lint s_h = s[i_sh];
        lint s_l = s[i_sl];

        //lint i_th = lower_bound(t.begin(), t.end(), q) - t.begin();
        lint i_th = binary_search(t, q);
        lint i_tl = i_th -1;
        if(i_tl < 0) i_tl = 0;
        lint t_h = t[i_th];
        lint t_l = t[i_tl];

        lint dist1 = calc_distance(q, t_h, s_h);
        lint dist2 = calc_distance(q, t_h, s_l);
        lint dist3 = calc_distance(q, t_l, s_h);
        lint dist4 = calc_distance(q, t_l, s_l);
        lint dist = min({dist1, dist2, dist3, dist4});
        cout << dist << endl;

    }

}