#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c, d, e, f;
		cout << "Nhap chieu ngang va doc thu nhat " << "la: ";
		cin >> a >> b;
		cout << "Nhap chieu ngang va doc thu hai " << "la: ";
		cin >> c >> d;
		cout << "Nhap tam nhin cua cai thu nhat: ";
		cin >> e >> f;
		if (abs(a - c) <= e && abs(b - d) <= f) {
			cout << "B nam trong tam nhin cua A";
		}
		else {
			cout << "B ko nham trong tam nhin cua A";
		}
		return 0;
}