#include<iostream>
#include<string>
using namespace std;
int Timsosaudauphay(int n, double result) {
	string str = to_string(result);
	size_t pos = str.find(".");
	if (pos == string::npos) {
		return -1;
	}
	if (pos + n + 1 > str.length()) {
		return -1;
	}
	return str[pos + n] - '0';
}
int main() {
	double a, b;
	int n;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so sau dau phay: ";
	cin >> n;
	if (b == 0)
		cout << "Khong the chia cho so 0";
	double result = a / b;
	if (Timsosaudauphay(n, result) == -1) {
		cout << "-1";
	}
	else {
		cout << Timsosaudauphay(n, result);
	}
	return 0;
}