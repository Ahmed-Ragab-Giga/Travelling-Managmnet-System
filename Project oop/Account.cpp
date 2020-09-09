#include "Account.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
vector<CustomerAccount>accounts;
int counter=0;
Account::Account()
{
	 id=0;
	 name="";
	 password="";
}
void CustomerAccount::add()
{
	CustomerAccount x;
	cout<<"Enter the customer id"<<endl;
	cin>>x.id;
	bool chek=1;
	for (int i = 0; i < counter; i++)
	{
		if(accounts[i].id==x.id)
		{
			cout<<"oops this id is exist !!!!! please try again"<<endl;
			chek=false;
			break;
		}
	}
	if(chek)
	{
		cout<<"Enter the customer name"<<endl;
		cin>>x.name;
		cout<<"Enter the customer password"<<endl;
		cin>>x.password;
		cout<<"Enter the type of ticket"<<endl;
		cin>>x.type_of_ticket;
		cout<<"Enter the number of trip"<<endl;
		cin>>x.num_of_reserved_trips;
		for(int i=0;i<x.num_of_reserved_trips;i++)
		{
			cout<<"Enter the trip type"<<endl;
			cin>>x.type_of_trip[i];
			cout<<"Enter the number of seat";
			cin>>x.num_of_reserved_chairs_intrip[i];
		}
		accounts[counter]=x;
		counter++;
	}
}
  
CustomerAccount::CustomerAccount() : Account() 
{
}


TourGuideAccount::TourGuideAccount() : Account()
{
}

Account::~Account()
{
}

CustomerAccount::~CustomerAccount()
{
}



TourGuideAccount:: ~TourGuideAccount()
{
}