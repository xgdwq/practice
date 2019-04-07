#include<set>
#include<string>
#include<iostream>

using namespace std;
/**
//自定义比较函数mycomp，重载"()"操作符
struct myComp
	{
		bool operator () (const int &a, const int &b)
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
	};
*/

struct Info
{
	string name;
	float score;
	
	//重载<操作符，自定义排序规则
	bool operator < (const Info &a) const
	{
		return a.score < score;//按分数从大到小排列，若要从小到大，则改为<即可
	}
};

int main()
{
	//set<int,myComp> s;
	set<Info>s;
	Info info;

	info.name = "tang";
	info.score = 90.5;
	s.insert (info);
	
	info.name = "zhang";
	info.score = 70.5;
	s.insert (info);

	info.name = "wang";
	info.score = 95.5;
	s.insert (info);

	set<Info>::iterator it;
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<(*it).name<<": "<<(*it).score<<endl;
	}

	/**
	s.insert (8);
	s.insert (1);
	s.insert (12);
	s.insert (6);
	s.insert (8);//重复元素，不会被插入，被忽略
	s.insert (9);
	s.insert (10);

	set<int, myComp>::iterator it;
	
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	*/
	return 0;
}