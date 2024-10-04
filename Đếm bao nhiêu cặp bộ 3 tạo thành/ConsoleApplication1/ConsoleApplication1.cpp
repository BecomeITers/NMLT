#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
	string str;
	cout << "Nhap mang so: ";
	getline(cin, str);
	stringstream ss(str); // Khi nhập số nó sẽ biến thành số nguyên
	int input[100];
	int i = 0;
	while (ss >> input[i]) {
		i++;
	}
	int count = 0;
	for (int j = 1; j < i - 1; j++) {
		if (input[j - 1] + input[j + 1] == input[j]) {
			count++;
		}
	}
	cout << "Ket qua la: " << count;
	return 0;
}