#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cout<<s.size ()<<endl;

	s = s + 'w';//β�ӵ����ַ�ֻ����+��

	s = s + "ang";//β���ַ���������+�����⣬�����Ե��ú���append()
	s.append ("qiang");

	cout<<s<<endl;
	cout<<s.size ()<<endl;
	
	return 0;
}