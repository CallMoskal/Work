#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    setlocale(0, "");
    srand(unsigned(time(NULL)));
    int N, i;
    std::cout<<"Введите размер матрицы: ";
    std::cin >> N;
    int ** A = new int * [N];
    for (int i = 0; i < N; i++)
      A [i] = new int [N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            A [i][j] = ((rand() % 50));
    }

    for (int i = 0; i < N; i++)
    {
     for(int j = 0; j < N; j++)
       std::cout << A[i][j] << " " ;
       std::cout << std::endl;
    }

    int min[i];//minimal v stroke
    for (int m=0; m<N; m++) {
      min[m]=101;
      for (int k=0; k<N; k++){
        if (A[m][k]<min[m])
        min[m]=A[m][k];
        std::cout << "min [ "<< m <<" ]=" << min[m] << '\n';
      }
    }

    int temp, tmp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (min[j] > min[j + 1]) {
                tmp=min[j];
                min[j]=min[j+1];
                min[j+1]=tmp;
                for (int k=0; k<N; k++){
                temp = A[j][k];
                A[j][k] = A[j + 1][k];
                A[j + 1][k] = temp;
              }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
     for(int j = 0; j < N; j++)
       std::cout << A[i][j] << " " ;
       std::cout << std::endl;
    }

  return 0;
}
