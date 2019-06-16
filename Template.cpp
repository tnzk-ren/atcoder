#include <bits/stdc++.h>

using namespace std;

using lint = long long;

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

void printZeroPad(int a, int n)
{
  cout << setfill('0') << right << setw(n) << a;
  cout << setfill(' ');
}

struct tri{
  int a;
  int b;
  int c;

  bool operator<(const tri &another) const
  {
    if(a != another.a)
      return a < another.a;

    if(b != another.b)
      return b < another.b;

    return c < another.c;
  };
};

int main(void)
{

}
