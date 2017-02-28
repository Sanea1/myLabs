#include <iostream>
using namespace std;


class matrix_multiplication{
public:
	int rows1, cols1, rows2, cols2, k, sum;
	int arr[2][2];
	int arr2[2][2];
	int multi_result[2][2];
	int i, j, temp;
	matrix_multiplication(){

	}
	void take_imput(){
		cout << "Enter no. of rows for matrix1" << endl;
		cin >> rows1;
		cout << "Enter no. of columns for matrix1" << endl;
		cin >> cols1;
		cout << "Enter no. of rows for matrix2" << endl;
		cin >> rows2;
		cout << "Enter no. of columns for matrix2" << endl;
		cin >> cols2;
		cout << "Enter the entries for first matrix" << endl;

		for (i = 0; i < rows1; i++){
			for (j = 0; j < cols1; j++){
				//cin >> temp;
				//arr[i][j] = temp;
				cin >> arr[i][j];
			}
		}
		cout << "Enter the entries for second matrix" << endl;
		for (i = 0; i < rows1; i++){
			for (j = 0; j < cols1; j++){
				/*cin >> temp;
				arr[i][j] = temp;*/
				cin >> arr2[i][j];
			}
		}
	}
	void unit_test(){
		if (cols1 != rows2){
			cout << "Matrix multiplication not possible" << endl;
		}

	}
	
	void multiplication()
	{
		for (i = 0; i < rows1; i++){
			for (j = 0; j < cols2; j++){
				for (k = 0; k < cols1; k++){
					sum = sum + arr[i][k] * arr2[k][j];
				}
				multi_result[i][j] = sum;
				sum = 0;
			}
		}
	}
	void mult_result(){
		cout << "Multiplication Result:" << endl;
		for (i = 0; i < rows1; i++){
			for (j = 0; j < cols2; j++){
				cout << multi_result[i][j];
				cout << "    " << endl;
			}

		}
	}
};
/*int main(){ 
	matrix_multiplication a;
	a.take_imput();
	a.multiplication();
	a.mult_result();
	a.unit_test();

	return 0;
}*/