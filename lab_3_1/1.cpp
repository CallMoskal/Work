#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	setlocale(0, "");
	int a, b, n;
	cout << "������� ����� ";
	cin >> b;
  for (n=2; n<=15; n++ )
  {
    cout <<"������� ����� ";
    cin >> a;
    if (a>b)
    b=a;
    else break;
  }
  if (n==16)
  cout <<"������������ ������������������"<< endl;
  else cout << "�������������� ������������������" << endl;
		_getch();
		return 0;
	}
