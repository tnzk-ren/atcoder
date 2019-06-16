#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

using namespace std;

int main(void)
{
	string S;
	cin >> S;

	int bit[10];
	int mask = 1;
	for (int i = 0; i < 10; i++) {
		bit[i] = mask;
		mask = mask << 1;
		//cout << static_cast<bitset<9> >(bit[i]) << endl;
	}

	unsigned long long sum = 0;
	mask = 0;
	for (int i = 0; i < pow(2, S.length() - 1); i++) {
		string str;
		str = S[0];
		int cosum = 0;
		for (int j = 0; j < S.length() - 1; j++) {
			if ((mask & bit[j]) == bit[j]) {
				sum += (unsigned long long)stod(str);
				//cout << (int)stod(str) << endl;
				str = S[j + 1];

			}
			else {
				str += S[j + 1];
			}

		}

		sum += (unsigned long long)stod(str);
		//cout << sum << endl;
		mask++;
	}
	cout << sum << endl;

	return 0;
}
