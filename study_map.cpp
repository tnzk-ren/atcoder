#include<iostream>
#include<map>

using namespace std;
int main(void)
{
    std::map<int, int> m1;
    /*
    m1[1] = 100;
    m1[2] = 200;
    m1[3] = 300;
    */
    /*
    cout << m1.size() << endl;
    cout << m1[1] << endl;
    cout << m1.size() << endl;
    */
    m1[1] = 100;
    m1[2] = 200;
    m1[3] = 300;
    
    map<int, int>::iterator it;
    it = m1.find(2);
    cout << m1.end()->first << "=>" << it->second << endl;

    for(auto& x: m1){
        std::cout << x.first << "=>" << x.second << std::endl;
    }

    return 0;
}