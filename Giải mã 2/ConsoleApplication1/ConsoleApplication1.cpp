#include<iostream>
using namespace std;
bool GiaiMa(string str1, string str2) {
	int nums1[256] = { 0 };
	int nums2[256] = { 0 };
	for (int i = 0; i < str1.length(); i++) {
		nums1[str1[i]]++;
	}
	for (int i = 0; i < str2.length(); i++) {
		nums2[str2[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (str1[i] == str2[i])
			return true;
	}
	return false;
}
int main() {
	string chuoi1 = "lhlrewdolo";
	string chuoi2 = "helloword";
	if (GiaiMa(chuoi1, chuoi2)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}