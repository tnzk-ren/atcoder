#include <iostream>

using namespace std;

int main(void)
{
    int a, b, x;
    cin >> a >> b >> x;
    if(a > x){
        printf("NO\n");
    }else if(a + b < x){
        printf("NO\n");
    }else{
        printf("YES\n");
    }

    return 0;
}
