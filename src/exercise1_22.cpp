//============================================================================
// Name : exercise1_22.cpp
// Author : Bhaskar Narayan Bhat
// Version :
// Copyright : Your copyright notice
// Description : None
//============================================================================

#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	Sales_item input;
	char ch;

	cout<<"Enter Sales item details (ISBN must be same):"<<endl;
	cin >> input;
	
	Sales_item total(input);
	while(true)
	{
		cout<<"Do you want to enter one more sales item ? (Y/N) :"<<endl;
		cin>>ch;
		
		if(ch == 'n' || ch == 'N')
		{
			break;
		}
		cout<<"Enter Sales Item :"<<endl;
		cin >> input;
		
		total += input;
	}
	cout<<endl;
	cout<<"Total :"<<endl;
	cout<<total<<endl;
	return 0;
}
