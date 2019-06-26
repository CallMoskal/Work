#include <iostream>
#include <math.h>
#include <conio.h>

typedef double(*pointFunc)(double);

double f(double x)
{
	return ((sqrt(2*x*x+1))/(x+1));
}

int main() {
  long i, n=4;
  double a, b, x, y, s, h, S_1, S_2, eps, delta, k1 = 0, k2 = 0;
	int sch_1, sch_2;
  sch_1=0;
  a=0.2;
  b=1.8;
  eps=0.0001;
  S_1=0;

  h=(b-a)/n;
  for (i=1; i<=n; i++)
  {
    x=a+i*h-h/2;
    S_1=S_1+f(x)*h;
  }
  do
  {
    n=2*n;
    h=(b-a)/n;
    S_2=0;
    for (i=1; i<=n; i++)
    {
      x=a+i*h-h/2;
      S_2=S_2+f(x)*h;
      sch_1++;
    }
    delta=fabs(S_1-S_2);
    S_1=S_2;
  } while (delta>eps);
  std::cout<<"S="<<S_1<<std::endl;
	std::cout<<"sch="<<sch_1<<std::endl;

	S_1=0;
	S_2=0;
	h=0;
  for(int i = 1; i < n; i += 2) {
		h=0;
		h=(b-a)/n;
    k1 += f(a + i*h);
    k2 += f(a + (i+1)*h);
		sch_2++;
  }
	S_2 = h/3*(f(a) + 4*k1 + 2*k2); //первое приближение для интеграла
  do {
    S_1 = S_2;     //второе приближение
    n = 2 * n;  //увеличение числа шагов в два раза,
		for(int i = 1; i < n; i += 4) {
			h=(b-a)/n;
			k1 += f(a + i*h);
			k2 += f(a + (i+1)*h);
			sch_2++;
			  // std::cout << "S=" << S_2 << std::endl;
		}
		S_2=h/3*(f(a) + 4*k1 + 2*k2);
  }
  while (fabs(S_2 - S_1) > eps);  //сравнение приближений с заданной точностью
  std::cout << "S=" << S_2 << std::endl;
	std::cout<<"sch="<<sch_2<<std::endl;

_getch();
return 0;
}
