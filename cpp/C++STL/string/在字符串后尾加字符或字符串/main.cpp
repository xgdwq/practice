#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cout<<s.size ()<<endl;

	s = s + 'w';//尾加单个字符只能用+号

	s = s + "ang";//尾加字符串除了用+号以外，还可以调用函数append()
	s.append ("qiang");

	cout<<s<<endl;
	cout<<s.size ()<<endl;
	
	return 0;
}