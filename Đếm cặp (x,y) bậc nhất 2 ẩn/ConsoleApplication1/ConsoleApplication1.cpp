#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string str;
	vector<int>input;
	int currentinput;
	getline(cin, str);
	stringstream ss(str);
	while (ss >> currentinput) {
		input.push_back(currentinput);
	}
	int count = 0;
	vector<int>output;
	for (int i = 0; i < input.size() - 2; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				if (input[i] * j + input[i + 1] * k == input[i + 2]) {
					output.push_back(j);
				}
			}
		}
	}
	for (int i = 0; i < output.size(); i++) {
		count++;
	}
	cout << count;
}