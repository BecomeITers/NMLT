#include <iostream>
#include<string>
#include<cctype>
using namespace std;
// Cách 1:
bool KiemTra(string input) {
	int count = 0;
	for (int i = 0; i < input.size() - 1; i++) {
		count++;
		if (isdigit(input[i])) {
			if (input[i] == input[i + count]) {
				return false;
			}
		}
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}
int main(){
	string input;
	cout << "Nhap day so pandigital: ";
	cin >> input;
	if (input.size() <= 10 && KiemTra(input)) {
		cout << "1";
	}
	else{
		cout << "0";
	}
	return 0;
}
// Cách 2:
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool KiemTra(string input) {
	if (input.size() == 10) {
		sort(input.begin(), input.end()); // Sắp xếp từ bé đến lớn
		if (input == "0123456789") {
			return true;
		}
	}
	return false;
}
int main() {
	string input;
	cout << "Nhap day so pandigital: ";
	cin >> input;
	if (KiemTra(input)) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}