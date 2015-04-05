//============================================================================
// Name : exercise2_18.cpp
// Author : Bhaskar Narayan Bhat
// Version :
// Copyright : Your copyright notice
// Description : None
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int i = 10;
	int *ptr = &i;

	cout<<"Actual Pointer Value : "<<ptr<<endl;
	ptr++;
	cout<<"Modified Pointer Value : "<<ptr<<endl;

	ptr--;
	cout<<"Actual value at pointer : "<<*ptr<<endl;
	(*ptr)++;
	cout<<"Modified value at pointer : "<<*ptr<<endl;

	return 0;
}
