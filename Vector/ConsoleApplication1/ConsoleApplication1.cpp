#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>myVector = { 0,1,2,3,4,5 };
	myVector.push_back(6); //Chèn thêm 1 số ở cuối cùng vector
	myVector.pop_back(); //Xóa đi 1 số cuối cùng vector
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i];
		if (i < myVector.size() - 1)
			cout << ",";
	}
	cout << "\n";
	vector<int>newVector(6, 1); //Tạo 6 chữ số 1
	for (int v : newVector) {
		cout << v;
	}
	return 0;
}