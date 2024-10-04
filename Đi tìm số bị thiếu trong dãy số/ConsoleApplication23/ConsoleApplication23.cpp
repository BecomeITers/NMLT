#include<iostream>
#include<climits>
using namespace std;
int lon = INT_MAX;
int be = INT_MIN;
int main() {
	int myArray[] = {6,2,3,8};
	int	nums[20] = { 0 };
	for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
	int v = myArray[i];
	nums[v]++;
	if (v < lon)
		lon = v;
	if (v > be)
		be = v;
	}
	int a = 0;
	int missingArray[20];
	for (int i = lon; i <= be; i++) {
		if (nums[i] == 0) {
			missingArray[a] = i;
			a++;
		}
	}
	cout << "Nhung so bi thieu la: ";
	for (int i = 0; i < a; i++) {
		cout << missingArray[i];
		if (i != a - 1)
			cout << ",";
	}
	return 0;
}