#include<set>
#include<string>
#include<iostream>

using namespace std;
/**
//�Զ���ȽϺ���mycomp������"()"������
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
	
	//����<���������Զ����������
	bool operator < (const Info &a) const
	{
		return a.score < score;//�������Ӵ�С���У���Ҫ��С�������Ϊ<����
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
	s.insert (8);//�ظ�Ԫ�أ����ᱻ���룬������
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