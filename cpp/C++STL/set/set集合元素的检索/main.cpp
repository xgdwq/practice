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

	set<int>::iterator it;
	
	it = s.find (6);//�ҵ����򷵻ص�����λ�ã�û�ҵ����򷵻����һ��Ԫ�صĺ�һλ�ã���end()
	if(it != s.end ())//��ʱ�����ҵ�
	{
		cout<<*it<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	it = s.find (20);
	if(it != s.end ())
	{
		cout<<*it<<endl;
	}
	else
	{
		cout<<"not find it!"<<endl;
	}

	return 0;
}