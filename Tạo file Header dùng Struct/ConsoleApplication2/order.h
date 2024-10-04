#include<iostream>
#include<string>
#include"user.h"
#include "product.h"
#include<vector>
#include"datetime.h"
#include"shop.h"
using namespace std;
enum OrderStatus {
	ordered = 0,
	paid = 1,
	received = 2,
	processing = 3,
	finished = 4,
};

struct Order {
	string id;
	User owner;
	string address;
	string phone;
	vector<OrderedProduct> products;
	OrderStatus status;
	DateTime orderedDate;
	DateTime receivedDate;
	Shop shop;
};