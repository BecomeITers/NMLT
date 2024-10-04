#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
int main(int argc, char * argv[]) {
	char input[100];
	cout << "Nhap chu: ";
	cin.getline(input, sizeof(input));
	char result[200];
	int index = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (isupper(input[i]) && i > 0) {
			result[index++] = ' '; //Khi biến index chạy tới vị trí chữ Hoa sẽ thêm khoảng cách
		}
		result[index++] = input[i]; // Sao chép tất cả input vào result
	}
	result[index] = '\0';
	cout << "Sau khi thay doi la: " << result;
	return 0;
}