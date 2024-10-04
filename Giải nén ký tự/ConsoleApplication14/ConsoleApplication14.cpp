#include<iostream>
#include<string>
using namespace std;
string compress(const string& Input) {
	string compress;
	char character = Input[0];
	int count = 1;

	for (int i = 1; i < Input.length(); i++) {
		if (Input[i] == character)
			count++;
		else {
			compress += to_string(count) + character;
			character = Input[i];
			count = 1;
		}
	}
	compress += to_string(count) + character;
	return compress;
}
int main() {
	string InputString;
	cout <<"Nhap chuoi ky tu:"<< endl;
	cin >> InputString;
	string StringCompress = compress(InputString);
	cout << "Ky tu sau khi giai nen la:" << StringCompress << endl;
}