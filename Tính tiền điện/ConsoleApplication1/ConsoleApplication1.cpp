#include <iostream>
using namespace std;
int TienDien(int kwh) {
	int caculate = 0;
	if (kwh > 0 && kwh <= 48) {
		caculate += kwh * 600;
	}
	if (kwh <= 96) {
		caculate += 48 * 600;
		caculate += (kwh - 48) * 1004;
	}
	if (kwh <= 144) {
		caculate += 48 * 600;
		caculate += 48 * 1004;
		caculate += (kwh - 96) * 1214;
	}
	if(kwh > 144){
		caculate += 48 * 600;
		caculate += 48 * 1004;
		caculate += 48 * 1214;
		caculate += (kwh - 144) * 1594;
	}
	return caculate;
}
int main(){
	int kwh;
	cout << "Nhap so kwh ban da su dung: ";
	cin >> kwh;
	cout << "So tien ban phai tra la: " << TienDien(kwh) << " dong";
	return 0;
}
