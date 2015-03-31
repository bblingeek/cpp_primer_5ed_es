//============================================================================
// Name : exercise1_19.cpp
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

	cout<<"Input 2 numbers:"<<endl;
	cin>> num1 >> num2;
	cout<<endl;

	if(num1 < num2)
	{
		for(int i = num1; i <= num2; i++)
		{
			cout<< i <<endl;
		}
	}
	else if(num2 < num1)
	{
		for(int i = num2; i <= num1; i++)
		{
			cout<< i <<endl;
		}
	}
	else
	{
		cout<<num1<<endl;
	}

    return 0;
}
