#include<iostream>
using namespace std;
int main() {
	int size;
	cout << "Nhap chieu dai mang: ";
	cin >> size;
	int* myArray = new int[size];
	cout << "Nhap day so: ";
	for (int i = 0; i < size; i++) {
		cin >> myArray[i];
	}
	cout << "Mang ban da nhap la: ";
	for (int i = 0; i < size; i++) {
		cout << myArray[i];
		if (i < size - 1)
			cout << ",";
	}
	cout << endl;
	int newSize;
	cout << "Nhap do dai mang moi: ";
	cin >> newSize;
	int* newArray = new int[newSize];
	int index;
	cout << "Nhap thu tu de xoa: ";
	cin >> index;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (myArray[i] != index) {
			newArray[count] = myArray[i];
			count++;
		}
	}
	cout << "Mang moi sau khi sua la : ";
	for (int i = 0; i < newSize; i++) {
		cout << newArray[i];
		if (i < newSize - 1)
			cout << ",";
	}
	delete[] myArray;
	delete[] newArray;
	return 0;
}