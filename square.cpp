#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  ifstream fin ("square.in");
  ofstream fout ("square.out");
  int x1, y1, x2, y2;
  int x3, y3, x4, y4;
  int arrx[4];
  int arry[4];
  int n = sizeof(arrx) / sizeof(arrx[0]);
  int n1 = sizeof (arry) / sizeof (arry[0]);
  fin >> arrx[0] >> arry[0] >> arrx[1] >> arry[1];
  fin >> arrx[2] >> arry[2] >> arrx[3] >> arry[3];
  int sideA = *max_element(arrx , arrx + n) - *min_element(arrx , arrx + n);
  int sideB = *max_element(arry , arry + n1) - *min_element(arry , arry + n1);
  int ans = (max(sideA , sideB))*(max(sideA , sideB));
  fout << ans;
}
