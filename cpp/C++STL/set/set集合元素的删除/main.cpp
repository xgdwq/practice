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
	s.insert (9);
	s.insert (10);

	s.erase (s.begin ());//ɾ��ָ��������λ���ϵ�Ԫ��
	//ɾ�������������䣬why?
	s.erase (10);//ɾ������ĳ��ֵ��Ԫ��

	set<int>::iterator it;//ǰ��������������������Ԫ����С��������
	for(it = s.begin (); it != s.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	s.clear ();
	cout<<s.size ()<<endl;

	return 0;
}