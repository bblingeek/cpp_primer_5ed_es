//============================================================================
// Name : exercise1_13_3.cpp
// Author : Bhaskar Narayan Bhat
// Version :
// Copyright : Your copyright notice
// Description : None
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	cout<<"Input 2 numbers (num1 < num2):"<<endl;
	cin>> num1 >> num2;
	cout<<endl;

	for(int i = num1; i <= num2; i++)
	{
		cout<< i <<endl;
	}

    return 0;
}
