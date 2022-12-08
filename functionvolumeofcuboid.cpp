#include<iostream>
using namespace std;
float volumeofcuboid(float l, float b, float h);

int main()
{
	float l,b,h,volume;
	cout<< "Enter the value of l";
	cin>> l;
	cout<< "Enter the value of b";
	cin>> b;
	cout<< "Enter the value of h";
	cin>> h;
	volume=volumeofcuboid(l,b,h);
	cout<<"Volumeofcuboid="<<volume;
	return 0;
}
float volumeofcuboid(float l, float b, float h)
{
	return l*b*h;
}
