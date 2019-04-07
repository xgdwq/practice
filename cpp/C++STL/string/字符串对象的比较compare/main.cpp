#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s = "wang qiang is good!";

	cout<<s.compare ("wang")<<endl;//more than, return 1
	cout<<s.compare ("wang qiang is good!")<<endl;// equal, return 0
	cout<<s.compare ("z")<<endl;//less than, return -1
	

	return 0;
}
