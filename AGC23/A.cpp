#include <iostream>

using namespace std;

int main(void)
{
    int N;
    long long a[200000];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int cnt = 0;
    long long sum = 0;
    for(int i = 0; i < N; i++){
        sum = 0;
        for(int j = i; j < N; j++){
            sum += a[j];
            cnt += sum == 0 ? 1 : 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
