#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	char ss[100];
	//const char *p;

	scanf("%s",ss);
	s = ss;//可以直接对字符串对象进行赋值：如s="wang";
	        //但更常用的把把一字符指针赋给一个字符串对象
	//p = s.c_str ();
	cout<<s<<endl;
	printf("%s\n",s.c_str ());//c_str() 以const char* 类型返回 string 内含的字符串

	return 0;
}