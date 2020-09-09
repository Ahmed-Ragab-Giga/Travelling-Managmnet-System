#include "Ticket.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


Ticket::Ticket()
{
	ticket_type = "";
	arr_of_seats = new int[];
}


Ticket::~Ticket()
{
	delete[] arr_of_seats;
}
