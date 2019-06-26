#include <iostream>
#include <ctime>
#include <cstdlib>

int ** Create( size_t n ) {
    int ** M = new int * [n];
    for ( size_t i = 0; i < n; ++i ) {
        M[i] = new int [n];
    }
    return M;
}

void FillRandomNumbers(int **matrix, const size_t rows, const size_t columns)
{
    srand((unsigned int)time(0)); // �������������� ����

    for (size_t row=0; row < rows; row++)
        for (size_t column=0; column < columns; column++)
            matrix[row][column] = rand() % 100; // ����������� ��
}

void Print( int ** M, size_t n) {
    for ( size_t i = 0; i < n; ++i ) {
        for ( size_t j = 0; j < n; ++j ) {
            std::cout<<M[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
}

int main()
{
  setlocale( LC_ALL, "Rus" );
size_t n, i, min_2;;

    // вводим размерность матрицы
    std::cout << "������� ������/������� ";
    std::cin >> n;

int ** A = Create( n );

FillRandomNumbers(A, n, n);
Print(A,n);

int min[i];
for (int m=0; m<n; m++) {
  min[m]=101;
  for (int k=0; k<n; k++){
    if (A[m][k]<min[m])
    min[m]=A[m][k];
    std::cout << "min [ "<< m <<" ]=" << min[m] << '\n';
  }
}

min_2=101; //минимальное значение среди всех строк
int minV[i];//новый порядок строк
int temp;

for (int m = 0; m < n - 1; m++) {
        for (int j = 0; j < n - m - 1; j++) {
            if (min[j] > min[j + 1]) {
                // меняем элементы местами
                temp = min[j];
                min[j] = min[j + 1];
                min[j + 1] = temp;
                std::cout << "j" << js << '\n';
            }
        }
    }

for (int m = 0; m < n; m++) {
  std::cout << "min[" <<m<<"]="<<min[m] << " ";
}


// for (m=0; m<n; m++)
// {
//   if (min[m]<min_2);
// }
  return 0;
}
