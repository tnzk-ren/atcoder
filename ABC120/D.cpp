#include <bits/stdc++.h>

using namespace std;

class UnionFind{
public:
  UnionFind(int N);
  int root(int x);
  bool connect(int x, int y);
  int size(int x);
private:
  vector<int> parent;
};

UnionFind::UnionFind(int N)
{
  parent = vector<int>(N, -1);
}

int UnionFind::root(int x)
{
  if(parent[x] < 0) return x;
  return parent[x] = root(parent[x]);
}

int UnionFind::size(int x)
{
  return -parent[root(x)];
}

bool UnionFind::connect(int x, int y)
{
  x = root(x);
  y = root(y);
  if( x == y){
    return false;
  }
  if(size(x) < size(y))
    swap(x, y);

  parent[x] += parent[y];
  parent[y] = x;

  return true;
}

int main(void)
{
  typedef unsigned long long lint;
  int N, M;
  cin >> N >> M;
  vector<int> qA(M);
  vector<int> qB(M);
  for(int i = 1; i <= M; i++){
    cin >> qA[M-i] >> qB[M-i];
    qA[M-i]--;
    qB[M-i]--;
  }
  lint size = (lint)N * (N - 1) / 2;
  vector<lint> ans;
  UnionFind uf(N);
  for(int i = 0; i < M; i++){
    ans.push_back(size);
    lint sizeA = uf.size(qA[i]);
    lint sizeB = uf.size(qB[i]);
    //cout << ans.back() << endl;
    if(uf.connect(qA[i], qB[i])){
      size = ans.back() - (long long)(sizeA * sizeB);
    }
  }
  for(int i = M-1; i >= 0; i--){
    cout << ans[i] << endl;
  }
}
