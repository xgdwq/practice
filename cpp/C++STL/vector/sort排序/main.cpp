#include<iostream>
#include<vector>
#include<algorithm>//�������

using namespace std;

//sort()Ĭ�Ͻ�����������
//�������Լ��ƶ��������

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
	sort( v.begin (), v.end (), comp );//��������

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}