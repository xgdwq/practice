#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	sort(s.begin (), s.end ());
	reverse(s.begin (), s.end ());//只是逆序，并不是从大到小
	                              //若要从大到小，可以先sort，再逆序
	cout<<s<<endl;

	string::iterator it;
	int sum = 0;
	for(it = s.begin (); it != s.end (); it++)//for(int i = 0; i < s.length; i++)
	{
		sum += (*it) - '0';
	}
	
	cout<<sum<<endl;

	return 0;
}
