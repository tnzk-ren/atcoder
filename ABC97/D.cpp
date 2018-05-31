#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool search(vector<int> &vx, vector<int> &vy, int a, int b){
    vector<int> v;
    v.push_back(a);
    for(int i = 0; i < v.size(); i++){
        //cout << v.size() << endl;
        for(int j = 0; j < vx.size(); j++){
            if(vx[j] == v[i]){
                if(find(v.begin(), v.end(), vy[j]) == v.end()){
                    v.push_back(vy[j]);
                }
            }
            if(vy[j] == v[i]){
                if(find(v.begin(), v.end(), vx[j]) == v.end()){
                    v.push_back(vx[j]);
                }
            }
        }
    }
    if(find(v.begin(), v.end(), b) != v.end()){
        return true;
    }
    else{
        return false;
    }

}


int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<int> vp(N);
    vector<int> vx(M);
    vector<int> vy(M);

    for(int i = 0; i < N; i++){
        cin >> vp[i];
    }
    for(int i = 0; i < M; i++){
        cin >> vx[i] >> vy[i];
    }
    int cnt = 0;
    vector<int> vs;
    for(int i = 0; i < N; i++){
        if(i+1 == vp[i]){
            cnt++;
            continue;
        }
        if(search(vx, vy, vp[i], i+1)){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;

}
