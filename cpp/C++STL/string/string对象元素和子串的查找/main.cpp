#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s = "wang qiang is good!";

	cout<<s.find ('a')<<endl;//���ص�һ�γ��ֵ��±꣬��0��ʼ
	cout<<s.find ("a")<<endl;
	cout<<s.find ("qiang")<<endl;//���ص�һ�γ����ַ��������ַ����±�
	cout<<s.find ("xgdwq")<<endl;//û�ҵ����򷵻�4294967295

	return 0;
}
