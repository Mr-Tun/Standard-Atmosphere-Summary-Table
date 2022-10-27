#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	for(a=1;a<=100;a++)
	{
	double h,t,p,k,Density;
	cout<<"Please enter an altitude(In metres)"<<'\n';
	cin>>h;
	if(h<0)
		cout<<"This is an invalid altitude, please re-enter"<<'\n'<<'\n';
	else if(h>=0&&h<11000)
	{
		t=288.15-0.0065*h;
		k=t/288.15;
		p= 101325 * pow(k, 5.25588);
		Density=1.225* pow(k, 4.25588);
		cout<<"This altitude is troposphere and The atmospheric pressure at this altitude is"<<'\t'<<p<<"pa"<<'\n';
		cout<<"The temperature at this altitude is"<<'\t'<<t<<"k"<<'\n';
		cout<<"The Density at this altitude is"<<'\t'<<Density<<"kg/(m*m*m)"<<'\n'<<'\n';
	}
	else if(h>=11000&&h<20000)
	{
		t=216.65;
		k=(11000-h)/6341.62;
		p= 22631.8*exp(k);
		Density= 0.36391*exp(k);
		cout<<"This altitude is stratospheric and the atmospheric pressure at this altitude is"<<'\t'<<p<<"pa"<<'\n';
		cout<<"The temperature at this altitude is"<<'\t'<<t<<"k"<<'\n';
		cout<<"The Density at this altitude is"<<'\t'<<Density<<"kg/(m*m*m)"<<'\n'<<'\n';
	}
	else if(h>=20000&&h<32000)
	{
		t=216.65+0.001*(h-20000);
		k=t/216.35;
		p= 5474.86 * pow(k, -34.1632);
		Density=0.088035* pow(k, -35.1632);
		cout<<"This altitude is stratospheric and the atmospheric pressure at this altitude is"<<'\t'<<p<<"pa"<<'\n';
		cout<<"The temperature at this altitude is"<<'\t'<<t<<"k"<<'\n';
		cout<<"The Density at this altitude is"<<'\t'<<Density<<"kg/(m*m*m)"<<'\n'<<'\n';
	}
	else if(h>=32000&&h<80000)
	{

		cout<<"This altitude is Intermediate Atmosphere ,The air mass in this layer first continues to rise with altitude, reaching 282.66 K at 53 km, and then drops to 196.86 K at 80 km. The air mass in this layer accounts for only one third of the total atmospheric mass."<<'\n'<<'\n';}
	else if(h>=80000&&h<400000)
	{

		cout<<"This altitude is High temperature layer,Here the temperature rises with altitude"<<'\n'<<'\n';
	}
	else if(h>=400000&&h<1600000)
	{

		cout<<"This altitude is Ionosphere"<<'\n'<<'\n';
	}
	else if(h>=1600000)
	{

		cout<<"This is no longer the atmosphere, it is the outer atmosphere"<<'\n'<<'\n';
	}
	}
	return 0;
}