#include <iostream>
using namespace std;
int powerOfb(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int main() {
    int a1, b1;
    cout << "Nhap so thu 1: ";
    cin >> a1;
    cout << "Nhap so thu 2: ";
    cin >> b1;
    int ketqua = powerOfb(a1, b1);
    cout << "Luy thua la: " << ketqua;
    return 0;
}
