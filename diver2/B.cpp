#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<pair<int, int>> xy(N);
    for(int i = 0; i < N; i++){
        cin >> xy[i].first >> xy[i].second;
    }

    vector<pair<int, int>> sub_xy;
    sort(xy.begin(), xy.end(), greater<pair<int, int>>());

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            pair<int, int> tx;
            pair<int, int> ty;
            tx.first = xy[i].first;
            tx.second = xy[i].second;
            ty.first = xy[j].first;
            ty.second = xy[j].second;
            if(tx.first == ty.first && tx.second == ty.second)
                continue;
            pair<int, int> tp;
            tp.first = tx.first - ty.first;
            tp.second = tx.second - ty.second;
            sub_xy.push_back(tp);
        }
    }

    int len_xy = sub_xy.size();
    int min1 = 51;
    for(int i = 0; i < len_xy; i++){
        int p = sub_xy[i].first;
        int q = sub_xy[i].second;
        int max1 = 0;
        //cout << p << " " << q << endl;
        vector<bool> fmap(N, true);
        int cnt = 0;
        for(int j = 0; j < N; j++){
            int x1 = xy[j].first;
            int y1 = xy[j].second;
            for(int k = 0; k < N; k++){
                if(j == k) continue;
                int x2 = xy[k].first;
                int y2 = xy[k].second;
                if(fmap[k] && x1-p == x2 && y1 - q == y2){
                    cnt++;
                    fmap[k] = false;
                    break;
                }
                //cout <<( x - x2) % p << " " << (y - y2) % q << endl;  
            }
            if(max1 < cnt){
                max1 = cnt;
            }
        }
        if(min1 > (N - max1)){
            min1 = N - max1;
        }
    }
    if(min1 == 51){
        min1 = 1;
    }

    cout << min1 << endl;
    return 0;
}