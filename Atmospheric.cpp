#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double h,t,p,k;
cout<<"Please enter a unit of elevation in metres:"<<'\n';
cin>>h;
if(h<0)
	cout<<"This is an invalid elevation, please re-enter"<<'\n';
else if(h>=0&&h<11000)
	{
		t=288.15-0.0065*h;
	k=t/288.15;
	p= 101325 * pow(k, 5.25588);
cout<<"This altitude is troposphere"<<'/n'<<"The atmospheric pressure at this altitude is"<<'\t'<<p<<"pa";
}
else if(h>=11000&&h<20000)
	{
		t=216.65;
	k=(11000-h)/6341.62;
	p= 22631.8*exp(k);
cout<<"This altitude is stratospheric"<<'/n'<<"The atmospheric pressure at this altitude is"<<'\t'<<p<<"pa";
}
else if(h>=20000&&h<32000)
	{
		t=216.65+0.001*(h-20000);
	k=t/216.35;
	p= 5474.86 * pow(k, -35.1632);
cout<<"This altitude is stratospheric"<<'/n'<<"The atmospheric pressure at this altitude is"<<'\t'<<p<<"pa";
}
return 0;
}