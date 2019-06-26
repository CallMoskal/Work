#include <iostream>
#include <conio.h>
int main(int argc, char const *argv[]) {
  int k, sum, sch=0;
  std::cout << "vvtdite k" << '\n';
  std::cin >> k;
  double a[k];
  for (int i=0; i<k; i++)
    {
      std::cout << "a[" << i <<"]=";
      std::cin >> a[i];
      if (a[i]<0)
      sch++;
      else
      sum+=a[i];
    }
  std::cout << "kollichestvo otrecatelnih = " <<sch<< '\n';
  std::cout << "summa polojitelnih = " <<sum<< '\n';
  return 0;
}
