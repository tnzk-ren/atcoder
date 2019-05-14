#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, M;
    map<string, int> card;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        card[s];
        card[s]++;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        string s;
        cin >> s;
        card[s];
        card[s]--;
    }
    int max = 0;
    for(auto itr = card.begin(); itr != card.end(); itr++){
        int value = itr->second;
        if(value > max)
            max = value;
    }

    cout << max << endl;
}