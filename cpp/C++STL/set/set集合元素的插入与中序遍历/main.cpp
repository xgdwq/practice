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
	s.insert (8);//�ظ�Ԫ�أ����ᱻ���룬������

	set<int>::iterator it;//ǰ��������������������Ԫ����С��������
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	//Ԫ�صķ������
	set<int>::reverse_iterator rit;//���������
	for(rit = s.rbegin (); rit != s.rend (); rit++)
	{
		cout<<*rit<<" ";
	}
	cout<<endl;

	return 0;
}