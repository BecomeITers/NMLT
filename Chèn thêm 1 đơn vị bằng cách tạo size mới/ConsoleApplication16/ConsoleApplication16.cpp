#include<iostream>
using namespace std;
int main() {
	int size = 5;
	int* myArray = new int[size];
	cout << "Nhap cac mang gia tri" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Nhap gia tri mang thu " << i << ":" << "\n";
		cin >> myArray[i];
	}
	int newSize = 6;
	int newItem = 60;
	int* newArray = new int[newSize];
	for (int i = 0; i < size; i++) {
		newArray[i] = myArray[i];
	}
	newArray[newSize - 1] = newItem;
		cout << "Cac gia tri sau khi sua la:";
	for (int i = 0; i < newSize; i++) {
		cout << newArray[i] << ",";
	}
	cout << "\b";
	delete[] myArray;
	delete[] newArray;
	return 0;
}