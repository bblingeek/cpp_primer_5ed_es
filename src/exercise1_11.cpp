//============================================================================
// Name        : exercise1_11.cpp
// Author      : Bhaskar Narayan Bhat
// Version     :
// Copyright   : Your copyright notice
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

	while(num1 <= num2)
	{
		cout<< num1 <<endl;
		num1++;
	}

    return 0;
}
