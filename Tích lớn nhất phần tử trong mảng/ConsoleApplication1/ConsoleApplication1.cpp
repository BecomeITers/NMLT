#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cout << "Nhap kich thuoc mang: ";
	cin >> n;
	vector<int> input(n);
	cout << "Nhap so: ";
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	int size = input.size();
	int result;
	for (size_t i = 1; i <= size - 1; i++) {
		int	multiply = input[i] * input[i - 1];
		result = max(result, multiply);
		}
	}
	cout << "Tich lon nhat phan tu trong mang la: " << result;
	return 0;
}
