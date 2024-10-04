#include<iostream>
using namespace std;
int main() {
	int matrix[100][100], rows, cols;
	cout << "Nhap hang: ";
	cin >> rows;
	cout << "Nhap cot: ";
	cin >> cols;
	cout << "Nhap ma tran: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << "Ma tran chuyen vi la: " << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << matrix[j][i] << "\t";
		}
		cout << endl;
	}

	return 0;
}