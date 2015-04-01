//============================================================================
// Name : exercise1_23.cpp
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
	Sales_item curInput, input;
	
	if(cin >> curInput)
	{
		int count = 1;
		while(cin >> input)
		{
			if(compareIsbn(input, curInput) == true)
			{
				count++;
			}
			else
			{
				cout<<curInput.isbn()<<" occurs "<<count<<" times."<<endl;
				count = 1;	//Reset counter
				curInput = input;
			}
		}
		cout<<curInput.isbn()<<" occurs "<<count<<" times."<<endl;
	}
	return 0;
}
