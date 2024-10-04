#include<iostream>
using namespace std;
void total(int a, int b) {
	int result = a + b;
	cout << "Tong so la: " << result;
	cout << endl;
}
int main() {
	int sum1, sum2;
	cout << "Nhap so thu nhat: ";
	cin >> sum1;
	cout << "Nhap so thu hai: ";
	cin >> sum2;
	total(sum1, sum2);
	return 0;
}