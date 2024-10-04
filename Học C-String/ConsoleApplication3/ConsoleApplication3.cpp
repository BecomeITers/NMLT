#include<iostream>
#include<string.h>
using namespace std;
//Chạy trên devC++ 
int main(int argc, char** argv) {
	//char myString1[100], myString2[100];
	//cout << "Nhap chuoi: ";
	//cin >> myString1;
	//strcpy(myString2, myString1);
	//cout << myString2;
	//cout << strlen(myString1) << "\n";
	//cout << sizeof(myString1) << "\n";
	//char famname[100], lastname[100], fullname[200];
	//fullname[0] = 0;
	//cout << "Nhap ho ten: ";
	//cin >> famname;
	//cout << "Nhap ten: ";
	//cin >> lastname;
	//strcat(fullname, famname);
	//strcat(fullname, lastname);
	//cout << "Ho ten la: " << fullname;
	//cout << strcmp(famname, lastname); //vd: Han & Tan thì ra "-1" còn Tan & Han thì ra "1"
	//cout << strcmpi(famname, lastname); // Nó sẽ ko so sánh chữ cái viết hoa
	char url[] = "https://www.GOOGLE.com.vn";
	//char* sliceurl = strrchr(url, '.');
	char* sliceurl = strlwr(url); //Chuyển thành thành chữ thường
	char* sliceurl = strupr(url); //Chuyển thành chữ viết hoa
	char* sliceurl = strrev(url); //Đảo ngược ký tự
	cout << sliceurl << "\n";
	sliceurl[0] = '?';
	cout << url; //Chứng tỏ là nó lấy từ chuỗi url rồi cắt ra chứ ko phải copy rồi tạo một chuỗi mới
	return 0;
}
int main(int argc, char** argv) {
	char name[] = "Nguyen-Nhat-Nam";
	char character[] = "-";
	char* subStr = strtok(name, character);
	while (subStr != NULL) { //NULL là ko có giá trị
		cout << subStr;
		subStr = strtok(NULL, character); 
	}
	return 0;
}
int main(int argc, char** argv) {
	char name[] = "Nguyen-Nhat-Nam";
	string(namecpp) = string(name);
	cout << namecpp;
	char namec[100];
	namec[0] = 0;
	strcpy(namec, namecpp.c_str());
	cout << namec;
	return 0;
}