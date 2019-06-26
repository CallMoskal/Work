#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Rus");
  setlocale(0, "");
  int x_c, y_c, r, x, y, n;
  cout<< "введите радиус r " << endl;
  cin >> r;
  cout << "введите координаты центра x и y" << endl;
  cin >> x_c >> y_c;
  for (y=1; y<=r; y++)
    for (x=1; x<=r; x++) {
      if ((x*x)+(y*y)<=r*r)
        n++;
    }
    n=4*n+4*r+1;
  //y=r+y_c;
  //for (y=y_c+r; y<=y_c-r; y--) {
  //   for (x=x_c-r; x<=x_c+r; x++) {
  //     if ((x*x)+(y*y)<=r*r)
  //       n++;
  //  }
  //}
cout<<n;
}
