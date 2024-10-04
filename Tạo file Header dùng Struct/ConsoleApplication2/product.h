#include<iostream>
#include<string>
using namespace std;
struct Product {
	string id;
	string name;
	int quantity;
	int price;
};
struct OrderedProduct {
	Product product;
	int quantity;
	int price;
};