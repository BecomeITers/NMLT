#include <iostream>
using namespace std;
int main(){
	int a, b;
	int result = 0;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			result += i;
		}
		if (i % 2 != 0) {
			result -= i;
		}
	}
	cout << "Ket qua la: " << result;
	return 0;
}