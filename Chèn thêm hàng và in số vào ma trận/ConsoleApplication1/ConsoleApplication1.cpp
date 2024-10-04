#include<iostream>
using namespace std;
void RepairMatrix(int matrix[100][100], int& rows, int& cols, int& AddRows) {
	for (int i = rows; i > AddRows; i--) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = matrix[i - 1][j];
		}
	}
		for (int j = 0; j < cols; j++) {
			matrix[AddRows][j] = AddRows;
		}
		rows++;
}
int main() {
	int rows, cols, matrix[100][100], AddRows;
	cout << "Nhap so hang: ";
	cin >> rows;
	cout << "Nhap so cot: ";
	cin >> cols;
	cout << "Nhap ma tran: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << "Nhap so hang de chen: ";
		cin >> AddRows;
		RepairMatrix(matrix, rows, cols, AddRows);
		cout << "Ma tran sau khi thay doi: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << matrix[i][j] << "\t";
			}
			cout << endl;
		}
		return 0;
}