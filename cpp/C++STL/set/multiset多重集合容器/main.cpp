#pragma warning (disable:4786)
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	multiset<string> ms;

	ms.insert ("abc");
	ms.insert ("123");
	ms.insert ("111");
	ms.insert ("aaa");
	ms.insert ("123");//与set的唯一区别即为可以插入相同的元素
	ms.insert ("bbb");
	ms.insert ("333");

	multiset<string>::iterator it;
	for(it = ms.begin (); it != ms.end (); it++)
	{
		cout<<*it<<endl;
	}
	
	it = ms.find ("abc");//找到则返回迭代器位置，未找到则返回end()
	if(it != ms.end () )
	{
		cout<<*it<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	int m;
	//int n;
	//int m, n, p;
	m = ms.erase ("aaa");//删除指定键值的元素，返回删除的个数
	//n = ms.erase (ms.begin ());
	//p = ms.erase (ms.begin (), ms.begin () + 2);
	//cout<<m<<" "<<n<<" "<<p<<endl;
	cout<<m<<endl;
	//cout<<n<<endl;

	for(it = ms.begin (); it != ms.end (); it++)
	{
		cout<<*it<<endl;
	}

	return 0;
}