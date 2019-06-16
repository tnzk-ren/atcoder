#include<bits/stdc++.h>

using namespace std;
using lint = long long;

struct tri{
  string a;
  int b;
  int c;

  bool operator<(const tri &another) const
  {
    if(a != another.a)
      return a < another.a;

    if(b != another.b)
      return b < another.b;

    return c < another.c;
  };
};

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    vector<int> deq(K*2);
    vector<int> V(N);
    for(int i = 0; i < N; i++){
        cin >> V[i];
    }
    for(int i = 0; i < K; i++){
        deq[i] = V[K-i-1];
        deq[i+K] = V[N-i-1];
    }
    for(int i = 0; i < K*2; i++){
        //cout << deq[i] << endl;
    }

    int mid = K-1;
    int max = V[0];
    for(int i = 0; i < K; i++){
        for(int j = 0; j < K; j++){
            int left = i + K - j;
            int right = i + K;
            int sum = 0;
            int r = K = j;
            int piv = mid;
            vector<int> vr;
            while(left <= piv){
                sum += deq[piv];
                if(deq[piv] < 0) vr.push_back(deq[piv]);
                piv--;
            }
            while(right > piv){
                sum += deq[piv];
                if(deq[piv] < 0) vr.push_back(deq[piv]);
                piv++;
            }
            sort(vr.begin(), vr.end(), greater<int>());
            for(int k = 0; k < r; k++){
                sum -= vr[k];
            }
            if(max < sum){
                sum = max;
            }
        }
    }

    cout << max << endl;
    return 0;
}