#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool isUpsort(vector<int> &vi)
{
    int last = 0;
    for(int i = 0; i < vi.size(); i++){
        if(vi[i] < last){
            return false;
        }
        last = vi[i];
    }
    return true;
}

void frontPick(vector<int> &vi, int n, vector<int> &vx)
{
    vx.clear();
    vx.push_back(vi[n]);
    for(int i = 0; i < vi.size(); i++){
        if(i != n){
            vx.push_back(vi[i]);
        }
    }

}

void backPick(vector<int> &vi, int n, vector<int> &vx)
{
    vx.clear();
    for(int i = 0; i < vi.size(); i++){
        if(i != n){
            vx.push_back(vi[i]);
        }
    }
    vx.push_back(vi[n]);
}

void qtov(queue<int> &qi, vector<int> &vi)
{
    for(int i = 0; i < vi.size(); i++){
        vi[i] = qi.front();
        qi.pop();
    }

}

void vtoq(vector<int> &vi, queue<int> &qi)
{
    for(int i = 0; i < vi.size(); i++){
        qi.push(vi[i]);
    }

}

int main(void)
{
    int N;
    cin >> N;
    queue<int> qi;
    vector<int> vi(N);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        qi.push(a);
    }


    int cnt = 1;
    int pnt = 0;
    int key = 8;
    while(1){
        qtov(qi, vi);

        for(int i = 0; i < N; i++){
            vector<int> vx(N);
            //cout << vx.size();
            frontPick(vi, i, vx);

            if(isUpsort(vx)){
                cout << cnt << endl;
                return 0;
            }
            vtoq(vx, qi);
            backPick(vi, i, vx);
            if(isUpsort(vx)){
                cout << cnt << endl;
                return 0;
            }
            vtoq(vx, qi);
            pnt += 2;
        }
        if(pnt / key >= 1){
            cnt++;
            pnt = 0;
            key *= 8;
        }
    }
}
