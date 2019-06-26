#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	setlocale(0, "");
	int a, b, n;
	cout << "введите число ";
	cin >> b;
  for (n=2; n<=15; n++ )
  {
    cout <<"введите число ";
    cin >> a;
    if (a>b)
    b=a;
    else break;
  }
  if (n==16)
  cout <<"возрастающая последовательность"<< endl;
  else cout << "невозрастающая последовательность" << endl;
		_getch();
		return 0;
	}
