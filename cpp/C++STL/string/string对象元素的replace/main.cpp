#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;

	s.append ("abc123def");
	cout<<s<<endl;
	
	//从第3个字符开始，连续的3个字符替换为good
	s.replace (3, 3, "good");
	cout<<s<<endl;

	return 0;
}
