#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1;//δָ����С������ͨ��push_back()β��Ԫ�����ŷ�ʽ

	vector<double> v2(10);//�ƶ��˴�С����ֵ��Ϊ0

	vector<double> v3(10, 8.6);//��ֵ��Ϊ8.6

	int i;
	for(i = 0; i < 10; i++)
	{
		v1.push_back (i);
	}

	vector<int>::iterator it1;//������������һ��Ҫ������������������Ԫ������һ��
	
	//begin()ָ���һ������end()ָ�����һ������һλ��
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;

	for(i = 0; i < 10; i++)
	{
		cout<<v2[i]<<" ";//ͨ���±귽ʽ����
	}
	cout<<endl;

	for(i = 0; i < 10; i++)
	{
		cout<<v3[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}