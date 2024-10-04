#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;
void process(char str[], char outstr[MAX_SIZE]) {
	int length = strlen(str);
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] != ' ') {
			outstr[count] = str[i];
		}
		else {
			count++;
			outstr[count] = ' ';
		}
	}
}
int main() {
	char str[] = "  abc  def  ghi  ";
	char outstr[MAX_SIZE];
	process(str, outstr);
	cout << outstr;
}