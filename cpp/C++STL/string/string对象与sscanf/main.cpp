#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1, s2, s3;
	char sa[50], sb[50], sc[50];

	sscanf("wang qiang boy","%s %s        %s", sa, sb, sc);//�Կո�ָ�����ָ��

	s1 = sa;
	s2 = sb;
	s3 = sc;
	cout<<s1<<" "<<s2<<" "<<s3<<endl;

	int a, b, c;
	sscanf("1 2 3", "%d %d %d", &a, &b, &c);////�Կո�ָ�����ָ��
	cout<<a<<" "<<b<<" "<<c<<endl;

	int x, y, z;
	sscanf("4,5$6", "%d, %d$%d", &x, &y, &z);//�Զ��ź�$�ŷָ�
	cout<<x<<" "<<y<<" "<<z<<endl;

	return 0;
}
