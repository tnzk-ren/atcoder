#include <iostream>
#include <vector>
#include "stdio.h"

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> vs(N);
    vector<int> ve(N);
    for(int i = 0; i < N; i++){
        scanf("%d-%d", &vs[i], &ve[i]);
    }
    for(int i = 0; i < N; i++){
        vs[i] -= vs[i] % 5;
        ve[i] += (5-ve[i] % 5);
    }
    return 0;
}
