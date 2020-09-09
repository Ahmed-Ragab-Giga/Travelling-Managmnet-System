#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

class TripDetails
{
	string start_data;
	string end_data;
	string trip_type;
	int num_of_available_seats;
	////////////////////////////////////////////////
public:
	TripDetails();
	 
	~TripDetails();
};

