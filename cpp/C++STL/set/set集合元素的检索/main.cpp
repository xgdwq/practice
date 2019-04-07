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
	s.insert (9);
	s.insert (10);

	set<int>::iterator it;
	
	it = s.find (6);//找到，则返回迭代器位置；没找到，则返回最后一个元素的后一位置，即end()
	if(it != s.end ())//此时代表找到
	{
		cout<<*it<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	it = s.find (20);
	if(it != s.end ())
	{
		cout<<*it<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	return 0;
}