#include<iostream>

using namespace std;

extern char fn(char c);

void main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		//cout<<ch<<fn(ch);//ע��fn�ڴ˴���һ����������Ϊcout��һ������
		                   //���fn������ִ�У���������Ԥ�ڲ�һ��
		cout<<ch;
		cout<<fn(ch);
		cout<<" ";
	}
	cout<<endl;
}
