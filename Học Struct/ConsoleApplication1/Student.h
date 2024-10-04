#include<string>
#include<iostream>
using namespace std;
struct student {
	string id;
	string name;
	string faculty;
	int year;

	student(string id) {
		if (id.size() == 8) {
			this->id = id;
		}
		else {
			cout << "Nhap sai MSSV";
		}
	}




	void ShowInfo() {
		cout << "My name is " << name <<" and my ID is "<< id;
	}
};