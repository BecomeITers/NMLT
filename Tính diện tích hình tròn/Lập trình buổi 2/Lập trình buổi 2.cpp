#include<iostream>
using namespace std;
double getArea(double radius) {
	const float pi = 3.14;
	return radius * radius * pi;
}
int main() {
	double radius;
	cout << "Enter the radius legnth:";
	cin >> radius;
	cout << getArea(radius) << "\n";
	return 0;
}