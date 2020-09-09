#include "Customer.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


Customer::Customer()
{
	 num_of_trips=0;
	 arr_of_trips=new int[];
}


Customer::~Customer()
{
	delete[] arr_of_trips;
}
