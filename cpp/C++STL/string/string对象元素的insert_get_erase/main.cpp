#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string::iterator it;

	s.append("wang");
	it = s.begin ();
	s.insert (it + 1,'1');//��a֮ǰ����1����w1ang
	cout<<s<<endl;

	cout<<s[1]<<endl;//ͨ���±����Ԫ��

	s.erase (it + 1);//ɾ��ָ��λ���ϵ�Ԫ��
	s.erase (it + 1, it + 3);//ɾ��ָ�����䣬��������it+3
	cout<<s<<endl;
	
	s = "";//ֱ�Ӹ���ֵ�������
	cout<<s.size ()<<s.length ()<<endl;//length��size�����ַ�������
	return 0;
}