#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    set<int> st;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int x = 0;
        cin >> x;
        st.insert(x);
    } 
    cout << st.size();
}