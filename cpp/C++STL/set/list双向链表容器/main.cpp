#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int> ll;

	ll.push_back (1);//expand the list from the back
	ll.push_back (3);
	ll.push_back (2);
	ll.push_back (5);
	ll.push_back (9);
	ll.push_back (1);

	ll.push_front (10);//expand the list from the head
	ll.push_front (1);
	ll.push_front (1);
	ll.push_front (1);

	list<int>::iterator it;//expand the list from the middle
	it = ll.begin ();
	it++; //notice: the list ,pointer must be one by one
	it++;
	ll.insert (it, 20);

	for(it = ll.begin (); it != ll.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	//sort(ll.begin (), ll.end ());//list不能用单独的sort算法(在<algorithm>)
	ll.sort ();//容器对象直接调用的算法不用包含<algorithm>
	for(it = ll.begin (); it != ll.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	list<int>::reverse_iterator rit;//逆序遍历
	for(rit = ll.rbegin (); rit != ll.rend (); rit++)
	{
		cout<<*rit<<" ";
	}
	cout<<endl;

	ll.pop_back ();//erase from the back
	ll.pop_front ();//erase from the head
	ll.remove (2);//erase the particular value,including all the same 
	it = ll.begin ();
	it++;
	it++;//only can increase one by one
	ll.erase(it);// erase the element of particular iterator
	ll.unique ();

	for(it = ll.begin (); it != ll.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	it = find(ll.begin (), ll.end (), 5);//单独的find算法，需要<algorithm>
	if(it != ll.end ())
	{
		cout<<"have find it!"<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	return 0;
}

