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

	s.erase (s.begin ());//删除指定迭代器位置上的元素
	//删除不了任意区间，why?
	s.erase (10);//删除等于某键值的元素

	set<int>::iterator it;//前向迭代器，中序遍历，即元素由小到大排列
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	s.clear ();
	cout<<s.size ()<<endl;

	return 0;
}