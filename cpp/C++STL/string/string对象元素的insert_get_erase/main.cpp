#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string::iterator it;

	s.append("wang");
	it = s.begin ();
	s.insert (it + 1,'1');//在a之前插入1，即w1ang
	cout<<s<<endl;

	cout<<s[1]<<endl;//通过下标访问元素

	s.erase (it + 1);//删除指定位置上的元素
	s.erase (it + 1, it + 3);//删除指定区间，但不包括it+3
	cout<<s<<endl;
	
	s = "";//直接赋空值用于清空
	cout<<s.size ()<<s.length ()<<endl;//length和size返回字符串长度
	return 0;
}