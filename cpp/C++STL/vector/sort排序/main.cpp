#include<iostream>
#include<vector>
#include<algorithm>//必须包含

using namespace std;

//sort()默认进行升序排序
//还可以自己制定排序规则

bool comp(const int &a, const int &b)
{
	if(a != b)
	{
		return a > b;
	}
	else
	{
		return a > b;
	}
}
int main()
{
	vector<int> v;
	vector<int>::iterator it;
	int i;

	for(i = 0; i < 10; i++)
	{
		v.push_back (9 - i);
	}

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	sort( v.begin (), v.end () );
	sort( v.begin (), v.end (), comp );//按降序排

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}