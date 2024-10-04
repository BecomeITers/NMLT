#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, n;
	cout << "Nhap so: ";
	cin >> a;
	cout << "Nhap so sau dau phay: ";
	cin >> n;
	double canbac = sqrt(a);
	int luythua = pow(10, n);
	int result = static_cast<int>(canbac * luythua) % 10;
	cout << "So sau dau phay thu n la: " << result;
	return 0;
}