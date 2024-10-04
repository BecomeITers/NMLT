#include<iostream>
using namespace std;
double getArea(double shortDedge, double longDedge) {
	return shortDedge * longDedge;
}
int main() {
	double shortDedge;
	cout << "Enter width:";
	cin >> shortDedge;

	double longDedge;
	cout << "Enter Length:";
	cin >> longDedge;

	cout << getArea(shortDedge, longDedge) << "\n";
	 return 0;
}