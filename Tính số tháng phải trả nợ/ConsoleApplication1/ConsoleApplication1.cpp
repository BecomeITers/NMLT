#include<iostream>
using namespace std;
int main() {
	int a, n, x;
	cout << "Nhap so tien can vay: ";
	cin >> a;
	cout << "So tien moi thang phai tra: ";
	cin >> n;
	cout << "Phan tram lai suat hang thang: ";
	cin >> x;
	float b = x / 100.0;
	float c = a;
	int count = 0;
	do {
		c = c - (n - (c * b));
		count++;
	} while (c > 0);
	cout << "So thang khach hang can phai tra no la: " << count;
	return 0;
}