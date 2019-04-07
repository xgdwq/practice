#include<iostream>

using namespace std;

extern char fn(char c);

void main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		//cout<<ch<<fn(ch);//注意fn在此处是一个函数且作为cout的一个参数
		                   //因此fn会先予执行，造成输出与预期不一样
		cout<<ch;
		cout<<fn(ch);
		cout<<" ";
	}
	cout<<endl;
}
