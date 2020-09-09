#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

class Account
{
protected:
	int id;
	string name;
	string password;
	////////////////////////////////////////////////
public:

	Account();
	~Account();
};

class CustomerAccount : public Account
{

	int num_of_reserved_chairs_intrip[10];
	int num_of_reserved_trips;
	string type_of_trip[10];
	string type_of_ticket;
	int discount;
public :
	void add();
	////////////////////////////////////////////////
public:
	CustomerAccount();
	~CustomerAccount();
};


class TourGuideAccount : public Account
{

	int final_salary;
	int num_of_taken_trip_monthly;
	////////////////////////////////////////////////
public:

	TourGuideAccount();
	~TourGuideAccount();

};