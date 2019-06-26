#include <iostream>
#include <ctime>
#include <cstdlib>

#define arr(line,column)    *(arr+line*n+column)

using namespace std;

int main()
{
	srand(time(NULL));

  int n, i, m, k; // размер массива

    // Ввод количества элементов массива
    cout << "n = ";
    cin >> n;

		int ** arr = new int * [n];
    for (int i = 0; i < n; i++)
        arr [i] = new int [n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr [i][j] = ((rand() % 50));

	// int n, line, column, sum1, sum2, temp, i;
	// //ввод размерности
	// cout << "Your array is arr[n][n]" << endl;
	// cout << "n: ";
	// cin >> n;
	//
	// //генерация массива
	// int * arr = (int *)malloc(n * n * sizeof(int));
	//
	// for (int line=0; line < n; line++) {
	// 	cout << " " << endl;
	// 	for (int column =0; column < n; column++) {
	//
	// 		arr(line, column)= (rand() % 50);
	// 		cout << arr(line, column) << " ";
	// 	}
	// }

  int min[i];//minimal v stroke
  for (int m=0; m<n; m++) {
    min[m]=101;
    for (int k=0; k<n; k++){
      if (arr(m,k)<min[m])
      min[m]=arr(m,k);
      std::cout << "min [ "<< m <<" ]=" << min[m] << '\n';
    }
  }


  for (int m=0; m<n-1; m++){
		for (int j = 0; j <n - m - 1; j++)
    if (min[j]>min[j+1]){
       for (int k=0; k<n; k++){
        temp=arr(j,k);
        arr(j,k)=arr(j+1,k);
        arr(j+1,k)=temp;
				// swap(arr(j,k), arr(j+1,k));
      }
    }
  }

  // cout << " " << endl;
  // 	cout << "sort:" << endl;
  // 	for (int line = 0; line < n; line++) {
  // 		cout << " " << endl;
  // 		for (int column = 0; column < n; column++) {
	//
  // 			cout << arr(line, column) << " ";
  // 		}
  // 	}

  	return 0;
  }
