#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;

	s.append ("abc123def");
	cout<<s<<endl;
	
	//�ӵ�3���ַ���ʼ��������3���ַ��滻Ϊgood
	s.replace (3, 3, "good");
	cout<<s<<endl;

	return 0;
}
