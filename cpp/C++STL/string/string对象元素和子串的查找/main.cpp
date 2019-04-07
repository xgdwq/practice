#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s = "wang qiang is good!";

	cout<<s.find ('a')<<endl;//返回第一次出现的下标，从0开始
	cout<<s.find ("a")<<endl;
	cout<<s.find ("qiang")<<endl;//返回第一次出现字符串的首字符的下标
	cout<<s.find ("xgdwq")<<endl;//没找到，则返回4294967295

	return 0;
}
