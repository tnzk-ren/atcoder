#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int n;
	long min = 10e8;
	std::cin >> n;

	n = n + 1;

	std::vector<long> v(n);

	for (long& x : v) {
		std::cin >> x;
	}


	std::sort(v.begin(), v.end());

	for (int i = 0; i < n-1 ; i++) {
		if (v[i+1]-v[i]<min) {
			min = v[i + 1] - v[i];
		}
	}

	//*/
	for (int i = 0; i < n-1; i++) {
		if ((v[i + 1] - v[i] )% min != 0) {
			min = 1;
		}
	}
	//*/



	std::cout << min << std::endl;
	return 0;
}
