#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int i = 0, &r = i;
	auto a = r;
	
	const int ci = i, &cr = ci;
	auto b = ci;
	
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	
	auto &g = ci;
	
	cout<<"Before assignment:-"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	cout<<"e = "<<e<<endl;
	cout<<"g = "<<g<<endl<<endl;
	
	a = 42;
	b = 42;
	c = 42;
	//d = 42;
	//e = 42;
	//g = 42;
	
	cout<<"After assignment:-"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	cout<<"e = "<<e<<endl;
	cout<<"g = "<<g<<endl<<endl;

	return 0;
}