#include<iostream>
#include<vector>
using namespace std;
int MIN = INT_MIN;
int main() {
	vector<int>myVector = { 3, 6, -2, -5, 7, 3 };
	for (int i = 0; i < myVector.size() - 1; i++) {
		int result = myVector[i] * myVector[i + 1];
		if (result > MIN) {
			MIN = result;
		}
	}
	cout << "Tich cap so lon nhat trong day so: " << MIN;
	return MIN;
}