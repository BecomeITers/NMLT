#include <iostream>
using namespace std;
int countDigits(string str)
{
	int count = 0;
	for (char c : str) {
		if (int(c) >= 48 && int(c) <= 57)
			count++;
	}
	return count;
}
int main(){
	string inputstr;
	cout << "Nhap vao chuoi:";
	cin >> inputstr;
	cout << countDigits(inputstr) << "\n";
}