#include<iostream>
#include<string>
using namespace std;
void GiaiMa(string str1, string str2) {
	int j = 0;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == str2[j]) {
			j++;
			if (j = str2.length()) {
				cout << "True";
			}
		}
	}
}
int main() {
	string a = "cdjkdsoffjdjklkekkls";
	string b = "codes";
	GiaiMa(a, b);
	return 0;
}