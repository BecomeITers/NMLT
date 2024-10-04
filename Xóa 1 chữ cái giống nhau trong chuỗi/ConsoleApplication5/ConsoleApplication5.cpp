#include<iostream>
#include<string>
using namespace std;
int main() {
	string result = "";
	string input = "Xin chhao";
	for (int i = 0; i < input.size() - 1; i++) {
		if (int(input[i]) >= 97 && int(input[i]) <= 122) {
			if (input[i] == input[i + 1]) {
				input.erase(i + 1, 1);
				i--;
			}
		}
	}
	for (int i = 0; i < input.size(); i++) {
		result += input[i];
	}
	cout << result;
	return 0;
}