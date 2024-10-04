#include<iostream>
#include<string>
#include<vector>
#include "user.h"
using namespace std;
struct Shop {
	string id;
	string name;
	string address;
	User owner;
	vector <User> Admins;
};