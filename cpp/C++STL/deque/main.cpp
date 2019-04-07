#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
	deque<int> d;// have no initial value
	//deque<int> d(10); // the initial value is 0
	//deque<int> d(10, 2); // the 10 initial value is 2
	int i;
	for(i = 0; i < 8; i++)
	{
		d.push_back (i); //expand the deque from its back,and the size is increasing
	}

	deque<int>::iterator it;
	for(it = d.begin (); it != d.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	d.push_front (9);//expand the deque from its head,and the size is also increasing
	d.push_front (8);
	//cout<<d.size ()<<endl;

	for(it = d.begin (); it != d.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	d.insert (d.begin () +2, 7);//expand the deque from its middle,and the size is also increasing

	for(it = d.begin (); it != d.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	deque<int>::reverse_iterator rit; //ÄæĞò±éÀú
	for(rit = d.rbegin (); rit != d.rend (); rit++)
	{
		cout<<*rit<<" ";
	}
	cout<<endl;

	d.pop_front();//erase from head
	d.pop_front ();

	d.pop_back ();//erase from back
	d.pop_back ();

	
	for(it = d.begin (); it != d.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	d.erase (d.begin () + 2); //notice the parameter is iterator

	sort(d.begin (), d.end ());// sort the deque by little to large
	for(it = d.begin (); it != d.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	d.clear ();//clear all the elements and now, the deque is empty
	cout<<d.size ()<<endl;//the size must be 0

	return 0;
}
