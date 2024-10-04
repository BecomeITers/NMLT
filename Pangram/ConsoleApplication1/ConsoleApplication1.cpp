#include<iostream>
#include<set>
#include<string>
using namespace std;
bool pangram(string str){
		set<char> a;
	for (char x : str) {
		a.insert(x);
	}
	if (a.size() != 26) {
		return false;
	}
	else {
		return true;
	}
}
int main() {
	string input = "abcdefghijklmnopqrstuvyz";
	if (pangram(input)) {
		cout << "False";
	}
	else {
		cout << "True";
	}
	return 0;
}