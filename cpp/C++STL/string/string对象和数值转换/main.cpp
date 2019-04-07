#include<iostream>
#include<string>
#include<sstream>// what mean?

using namespace std;

//C++ method: convert the numberic to string
string convertToString(double x)
{
	ostringstream o;//what mean?

	if(o << x)//what mean?
	{
		return o.str();//what mean?
	}

	return "conversion error";
}

//C++ method: convert the string to numberic
double convertFromString(const string &s)
{
	istringstream i(s);//what mean?
	double x;

	if(i >> x)//what mean?
	{
		return x;
	}

	return 0.0;//if error
}

int main()
{
	char b[10];
	string a;

	//convet the numberic to string: C method
	sprintf(b, "%d", 1975);//why?
	a = b;
	cout<<a<<endl;
	
	//convet the numberic to string: C++ method
	string cc = convertToString(1976);
	cout<<cc<<endl;

	//convet the string to numberic: C++ method
	string dd = "2006";
	int p = convertFromString(dd) + 2;
	cout<<p<<endl;

	return 0;
}


