#include <iostream>
#include <vector>

using namespace std;

class unionFind{
public:
	unionFind(int n);
	int root(int x);
	bool same(int x, int y);
	void unite(int x, int y);

	vector<int> par;
};

unionFind::unionFind(int n){
	for (int i = 0; i < n; i++){
		par.push_back(i);
	}
}

int unionFind::root(int x)
{
	if (par[x] == x){
		return x;
	}
	else{
		return par[x] = root(par[x]);
	}
}

bool unionFind::same(int x, int y)
{
	return root(x) == root(y);
}

void unionFind::unite(int x, int y)
{
	x = root(x);
	y = root(y);
	if (x == y)
		return;
	par[x] = y;
}

int main(void)
{
	int N, M;

	cin >> N >> M;

	vector<int> vp(N);
	for (int i = 0; i < N; i++){
		cin >> vp[i];
	}
	unionFind *uf = new unionFind(N);


	for (int i = 0; i < M; i++){
		int x, y;
		cin >> x >> y;
		uf->unite(x-1, y-1);
	}
	int cnt = 0;
	for (int i = 0; i < N; i++){
		if (uf->same(i, vp[i]-1)){
			cnt++;
		}
	}
	cout << cnt << endl;
}
