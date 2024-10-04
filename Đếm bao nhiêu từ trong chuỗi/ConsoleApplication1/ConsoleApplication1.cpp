#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	stringstream ss(s);
	string input;
	int count = 0;
	while (ss >> input) {
		count++;
	}
	cout << "Tong cac chu la: " << count;
	return 0;
}