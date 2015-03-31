//============================================================================
// Name        : exercise19.cpp
// Author      : Bhaskar Narayan Bhat
// Version     :
// Copyright   : Your copyright notice
// Description : None
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0;
	int val = 50;

	while(val <= 100)
	{
		sum += val;
		val++;
	}

	cout<<"Sum of 50 to 100 inclusive is "
		<<sum<<endl;

    return 0;
}
