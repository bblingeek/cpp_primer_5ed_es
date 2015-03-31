//============================================================================
// Name : exercise1_21.cpp
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
	Sales_item s1, s2;

	cin>> s1 >> s2;
	if(compareIsbn(s1, s2) == true)
	{
		Sales_item s3 = s1 + s2;
		cout<<s3<<endl;
	}
	else
	{
		cout<<"ISBN do not match"<<endl;
	}
	return 0;
}
