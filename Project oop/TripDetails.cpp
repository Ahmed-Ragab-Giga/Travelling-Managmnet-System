#include "TripDetails.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


TripDetails::TripDetails()
{
	start_data = "";
	end_data = "";
	trip_type = "";
	num_of_available_seats = 10;
}


TripDetails::~TripDetails()
{
}
