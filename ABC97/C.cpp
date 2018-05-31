#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int k;
    string str;
    cin >> str;
    cin >> k;

    vector<string> vs;

    for(int i = 0; i < str.size(); i++){
        string temp = "";
        for(int j = 0; j < 5; j++){
            if(i + j >= str.size()){
                break;
            }
            temp += str[i+j];
            if(find(vs.begin(), vs.end(), temp) == vs.end()){
                vs.push_back(temp);
            }
        }
    }

    sort(vs.begin(), vs.end());

    cout << vs[k-1] << endl;;

    return 0;
}
