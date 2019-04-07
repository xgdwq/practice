#include<set>
#include<iostream>

using namespace std;

int main()
{
	set<int> s;
	
	s.insert (8);
	s.insert (1);
	s.insert (12);
	s.insert (6);
	s.insert (8);//重复元素，不会被插入，被忽略

	set<int>::iterator it;//前向迭代器，中序遍历，即元素由小到大排列
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	//元素的反向遍历
	set<int>::reverse_iterator rit;//反向迭代器
	for(rit = s.rbegin (); rit != s.rend (); rit++)
	{
		cout<<*rit<<" ";
	}
	cout<<endl;

	return 0;
}