#pragma warning (disable : 4786)
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<char, int> m;//��һ������Ϊ��ֵ���ڶ���Ϊӳ��ֵ

	m['m'] = 25;//�����ֵ
	m['k'] = 28;
	m['x'] = 10;
	m['a'] = 30;

	map<char, int>::iterator it;//�������������ֵ��С��������
	for(it = m.begin (); it != m.end (); it++)
	{
		cout<<(*it).first<<": "<<(*it).second<<endl;
	}

	map<char, int>::reverse_iterator rit;//�������������ֵ�ɴ�С����
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

	m.erase (m.begin ());//����ɾ������,����begin��end֮�����
	m.erase ('m');

	for(it = m.begin (); it != m.end (); it++)
	{
		cout<<(*it).first<<": "<<(*it).second<<endl;
	}

	return 0;
}

/**
 * map�Լ������multimap�ڲ����Ǻ�����ṹ���䳣�÷�������࣬
   �����Զ���ȽϹ������ַ��룬Ԫ�ز��룬ɾ�������ҵȣ������Բ���ǰ���˼��ͷ���
 */















