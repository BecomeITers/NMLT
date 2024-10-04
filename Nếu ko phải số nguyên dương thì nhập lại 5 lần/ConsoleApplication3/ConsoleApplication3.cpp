#include<iostream>
using namespace std;
int main() {
	int MAX = 5;
	int a = 0;
	int b;
	cout << "Nhap so: ";
	cin >> b;
	if (b < 0 ) {
		do {
			cout << "Nhap lai:";
			cin >> b;
			a++;
			if (b > 0) {
				cout << "Ban nhap dung so nguyen duong la:" << b << endl;
				break;
			}
		} while (a <= MAX);
	}
	else {
		cout << "Ban nhap dung so nguyen duong la: " << b << endl;
	}
	return 0;
}