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
	ms.insert ("123");//��set��Ψһ����Ϊ���Բ�����ͬ��Ԫ��
	ms.insert ("bbb");
	ms.insert ("333");

	multiset<string>::iterator it;
	for(it = ms.begin (); it != ms.end (); it++)
	{
		cout<<*it<<endl;
	}
	
	it = ms.find ("abc");//�ҵ��򷵻ص�����λ�ã�δ�ҵ��򷵻�end()
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
	m = ms.erase ("aaa");//ɾ��ָ����ֵ��Ԫ�أ�����ɾ���ĸ���
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