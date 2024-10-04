#include<iostream>
using namespace std;
int main() {
	int size;
	cout << "Nhap chieu dai mang 1 chieu: ";
	cin >> size;
	cout << endl;
	int* array1D = new int[size];
	cout << "Nhap so: ";
	for (int i = 0; i < size; i++) {
		cin >> array1D[i];
	}
	cout << "\n";
	cout << "Mang 1 chieu la: ";
	for (int i = 0; i < size; i++) {
		cout << array1D[i];
		if (i < size - 1)
			cout << ",";
	}
	cout << "\n";
	int rows;
	cout << "Nhap so hang: ";
		cin >> rows;
	int cols;
	cout << "Nhap so cot: ";
		cin >> cols;
	int** array2D = new int*[rows];
	for (int i = 0; i < rows; i++) {
		array2D[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			array2D[i][j] = array1D[i * cols + j];
		}
	}
	cout << "Mang 2 chieu la: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array2D[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++) {
		delete[] array2D[i];
	}
	delete[] array2D;
	delete[] array1D;
	return 0;
}