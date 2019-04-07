/**
#include<iostream>
#include<string>
#include<queue>

using namespace std;


struct Info
{
	string name;
	float score;

	bool operator < (const Info &a) const//in struct:overload the operator "<"
	{
		return a.score < score;//from little to large
	}
};

int main()
{
	priority_queue<Info> pq;
	Info info;

	info.name = "wang";
	info.score = 95.5;
	pq.push (info);

	info.name = "zhang";
	info.score = 87.5;
	pq.push (info);

	info.name = "li";
	info.score = 90.5;
	pq.push (info);

	while(pq.empty () != true)
	{
		cout<<pq.top ().name<<": "<<pq.top ().score<<endl;//return the top element
		pq.pop ();//erase the top element
	}

	return 0;
}
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct myComp
{
	bool operator () (const int &a, const int &b)
	{
		return a > b;//从小到大排列
	}
};

int main()
{
	//显示说明内部结构是vector，否则出错，为啥？？
	priority_queue<int, vector<int>, myComp> pq;

	pq.push (9);
	pq.push (7);
	pq.push (6);
	pq.push (30);

	while(pq.empty () != true)
	{
		cout<<pq.top ()<<" ";
		pq.pop ();
	}
	cout<<endl;

	return 0;
}

	
