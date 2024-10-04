#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
	int n;
	cout << "Nhap kich co: ";
	cin >> n;
	vector<int>input(n);
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	int result = 0;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < n; i++) {
		if (input[i] > max1) {
			max2 = max1;
			max1 = input[i];
		}
		else if (input[i] > max2 && input[i] < max1) {
			max2 = input[i];
		}
	}
	cout << max2;
	return 0;
}