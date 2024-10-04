#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>nums = { 1,2,3,4,5 };
	int a = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 1) {
			a += nums[i];
			cout << a << "\n";
		}


	}
	return a;
}


