#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    string input;
    cout << "Nhap chuoi: ";
    cin >> input;
    int result = 0;
    int kq = 0;
    for (char v : input) {
        if (isdigit(v)) {
            result = result * 10 + (v - '0');
        }
        else {
            kq += result;
            result = 0;
        }
    }
    kq += result;
    cout << "Tong cua cac so trong chuoi la: " << kq;
    return 0;
}