#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s = "wang qiang is good!";
	//string::iterator it;

	reverse( s.begin (), s.end () );
	cout<<s<<endl;

	return 0;
}
