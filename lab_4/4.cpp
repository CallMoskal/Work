#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

long double fact(int N)
{
    if(N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля
    else // Во всех остальных случаях
        return N * fact(N - 1); // делаем рекурсию.
}

int main()
{
  setlocale (LC_ALL, "RUSSIAN");
double eps=0.0001, x_f;
int n, x;
cout << "vvedite x " << '\n';
cin >> x;
x_f=1;
n=3;
while ((pow (x, n))/fact(n)>eps){
  x_f=x_f+(pow (x, n))/fact(n);
  n=n+2;
}
cout << x_f;
_getch();
return 0;
}
