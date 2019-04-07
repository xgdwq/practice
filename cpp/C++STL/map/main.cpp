#pragma warning (disable : 4786)
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<char, int> m;//第一个参数为键值，第二个为映照值

	m['m'] = 25;//插入键值
	m['k'] = 28;
	m['x'] = 10;
	m['a'] = 30;

	map<char, int>::iterator it;//正向遍历，按键值由小到大排列
	for(it = m.begin (); it != m.end (); it++)
	{
		cout<<(*it).first<<": "<<(*it).second<<endl;
	}

	map<char, int>::reverse_iterator rit;//反向遍历，按键值由大到小排列
	for(rit = m.rbegin (); rit != m.rend (); rit++)
	{
		cout<<(*rit).first<<": "<<(*rit).second<<endl;
	}

	it = m.find ('u');//if yes, return the iterator; if no, return end()
	if(it != m.end ())
	{
		cout<<"have find it!"<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	m.erase (m.begin ());//不能删除区间,但是begin与end之间可以
	m.erase ('m');

	for(it = m.begin (); it != m.end (); it++)
	{
		cout<<(*it).first<<": "<<(*it).second<<endl;
	}

	return 0;
}

/**
 * map以及后面的multimap内部都是红黑树结构，其常用方法均差不多，
   包括自定义比较规则，数字分离，元素插入，删除，查找等，都可以参照前面的思想和方法
 */















