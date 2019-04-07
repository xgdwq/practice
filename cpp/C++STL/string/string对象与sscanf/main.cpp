#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1, s2, s3;
	char sa[50], sb[50], sc[50];

	sscanf("wang qiang boy","%s %s        %s", sa, sb, sc);//以空格分隔传递指针

	s1 = sa;
	s2 = sb;
	s3 = sc;
	cout<<s1<<" "<<s2<<" "<<s3<<endl;

	int a, b, c;
	sscanf("1 2 3", "%d %d %d", &a, &b, &c);////以空格分隔传递指针
	cout<<a<<" "<<b<<" "<<c<<endl;

	int x, y, z;
	sscanf("4,5$6", "%d, %d$%d", &x, &y, &z);//以逗号和$号分隔
	cout<<x<<" "<<y<<" "<<z<<endl;

	return 0;
}
