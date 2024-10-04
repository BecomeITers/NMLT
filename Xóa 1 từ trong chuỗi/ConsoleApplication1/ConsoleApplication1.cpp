#include<iostream>
#include<string>
using namespace std;
int main() {
	string input = "Hello cac ban";
	string erase = "cac";
	size_t pos = input.find(erase);
	if (pos != string::npos) {
		input.erase(pos, erase.length());
		// có th? dùng input.replace(pos, erase.length());
	}
	cout << "Chuoi sau khi thay doi la: " << input;
	return 0;
}