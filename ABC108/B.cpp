#include <iostream>

using namespace std;

void vecTurn(int x1, int y1, int x2, int y2, int *x, int *y)
{
  int sx = x2 - x1;
  int sy = y2 - y1;
  *x = x2 - sy;
  *y = y2 + sx;
}

int main(void)
{
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x3, y3;
  vecTurn(x1, y1, x2, y2, &x3, &y3);

  int x4, y4;
  vecTurn(x2, y2, x3, y3, &x4, &y4);

  cout << x3 << " ";
  cout << y3 << " ";
  cout << x4 << " ";
  cout << y4 << endl;

  return 0;
}
