#include <iostream>
#include <conio.h>

int main(int argc, char const *argv[]) {
  int n, k;
  std::cout << "vvtdite k" << '\n';
  std::cin >> k;
  double a[2*k], b[2*k];
  for (int i=1; i<=2*k; i++)
    {
      std::cout << "a[" << i <<"]=";
      std::cin >> a[i];
    }
  b[1]=a[2*k];
  for (int i=1; i<=2*k; i++)
  {
  b[i]=a[i-1];
  std::cout << "a[" << i <<"]=" << b[i] << '\n';
  }
  return 0;
}
