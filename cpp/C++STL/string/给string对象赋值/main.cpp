#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	char ss[100];
	//const char *p;

	scanf("%s",ss);
	s = ss;//����ֱ�Ӷ��ַ���������и�ֵ����s="wang";
	        //�������õİѰ�һ�ַ�ָ�븳��һ���ַ�������
	//p = s.c_str ();
	cout<<s<<endl;
	printf("%s\n",s.c_str ());//c_str() ��const char* ���ͷ��� string �ں����ַ���

	return 0;
}