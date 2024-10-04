#include<iostream>
using namespace std;
bool NamNhuan(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return true;
	}
	else
		return false;
}
int main() {
	int year;
	cout << "Nhap so nam: ";
	cin >> year;
	if (NamNhuan(year) == true) {
		cout << year << " la nam nhuan";
	}
	else if (NamNhuan(year) == false) {
		cout << year << " ko phai la nam nhuan";
	}
	return 0;
}