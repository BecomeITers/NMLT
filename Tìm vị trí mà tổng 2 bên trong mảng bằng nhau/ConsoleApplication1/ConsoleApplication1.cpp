#include<iostream>
#include<vector>
using namespace std;
void tinhToan(int result, int lefttotal, vector<int>input) {
	for (int i = 0; i < input.size(); i++) {
		result -= input[i];
		lefttotal += input[i];
		if (result == lefttotal) {
			cout << i;
		}
	}
}
int main() {
	int n;
	cout << "Nhap kich thuoc: ";
	cin >> n;
	vector<int>input(n);
	int result = 0;
	cout << "Nhap so: ";
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	cout << "Tong cac so trong mang la: ";
	for (int i = 0; i < input.size(); i++) {
		result += input[i];
	}
	cout << result;
	cout << endl;
	int lefttoal = 0;
	cout << "Vi tri tong so hai ben bang nhau: ";
	tinhToan(result, lefttoal, input);
	return 0;
}