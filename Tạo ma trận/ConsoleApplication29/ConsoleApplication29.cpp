#include <iostream>
using namespace std;
int main(){
	int mat[][3] = {
		{1,2},
		{11,22},
		{111,222}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << mat[i][j] << "\t";
		}
		cout << "\n";
	}
}
