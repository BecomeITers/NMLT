#include<iostream>
#include<string>
using namespace std;
int main() {
	string myString;
	cout << "Nhap Palindrome: ";
	cin >> myString;
	for (int i = 0; i < myString.length(); i++) {
		if (myString[i] != myString[myString.length() - 1 - i])
			cout << "False";
		else {
			cout << "True";
		}
	}
}