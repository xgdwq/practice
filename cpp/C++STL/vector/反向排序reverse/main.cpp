#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator it;
	int i;

	for(i = 0; i < 10; i++)
	{
		v.push_back (i);
	}

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	reverse( v.begin (), v.end () );

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}