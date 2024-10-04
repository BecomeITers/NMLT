#include<iostream>
#include<string>
using namespace std;
int main() {
	string a = "aabcc";
	string b = "adcaa";
	int count = 0;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++) {
			if (a[i] == b[j]) {
				count++;
				a.erase(j, 1);
					break;
			}
		}
	}
	cout << "Tong chu cai giong nhau la: " << count;
}