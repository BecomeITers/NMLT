#include<iostream>
using namespace std;
int main() {
	int matrix[3][4] = {
		{0,1,1,2},
		{0,5,0,0},
		{2,0,3,3}
	};
	int total = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (matrix[j][i] == 0)
				break;
			else {
				total += matrix[j][i];
			}
		}
	}
	cout << "Tong la: " << total << endl;
}