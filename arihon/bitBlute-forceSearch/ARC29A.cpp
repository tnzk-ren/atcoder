#include <iostream>

using namespace std;

int bin_search(int meat[], int count, int timeA, int timeB)
{

    if(count == 0){

        int ans1 = timeA + meat[0] > timeB ? timeA + meat[0] : timeB;
        int ans2 = timeA > timeB + meat[0] ? timeA : timeB + meat[0];
        return ans1 < ans2 ? ans1 : ans2;
    }
    int ans1 = bin_search(meat, count-1, timeA+meat[count], timeB);
    int ans2 = bin_search(meat, count-1, timeA, timeB+meat[count]);
    return ans1 < ans2 ? ans1 : ans2;
}
int main(void)
{
    int N;
    cin >> N;
    int niku[4] = {0};
    for(int i = 0; i < N; i++){
        cin >> niku[i];
    }
    cout << bin_search(niku, N-1, 0, 0) << endl;

    return 0;
}
