#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int nearLeft(int n) {
	while (!isPrime(n)) {
		n--;
	}
	return n;
}
int nearRight(int n) {
	while (!isPrime(n)) {
		n++;
	}
	return n;
}
int main(){
	double n;
	cout << "Nhap so: ";
	cin >> n;
	int nearleft = nearLeft(static_cast<int>(n));
	int nearright = nearRight(static_cast<int>(n));
	int result = nearleft + nearright;
	cout << "Ket qua la: " << result;
	return 0;
}