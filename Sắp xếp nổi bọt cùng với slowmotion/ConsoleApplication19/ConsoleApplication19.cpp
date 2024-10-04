#include<iostream>
#include<thread>
using namespace std;
int main() {
	int size = 5;
	int* n = new int[size];
	cout << "NHAP 5 PHAN TU"<<endl;
		for (int i = 0; i < size; i++) {
		cout << "Nhap phan tu thu "<<i<<" la:";
		cin >> n[i];
		}
		cout << "PHAN TU BAN NHAP LA : " << endl;
		for (int i = 0; i < size; i++) {
			cout << n[i];
			if (i != size - 1) {
				cout << ",";
				this_thread::sleep_for(chrono::milliseconds(1000));
			}
		}
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (n[j] > n[j + 1]) {
					int temp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = temp;
				}
			}
		}
		cout << endl;
		cout << "PHAN TU SAU KHI DA SAP XEP LA:" << endl;
		for (int i = 0; i < size; i++) {
			cout << n[i] << ",";
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		cout << "\b";
		delete[] n;
		return 0;
}