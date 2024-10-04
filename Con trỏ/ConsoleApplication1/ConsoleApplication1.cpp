#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int sum = *ptr1 + *ptr2;
	cout << "Tong cua 2 so a va b la: " << sum;
	return 0;
}