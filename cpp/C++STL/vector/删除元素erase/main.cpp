#include<iostream>
#include<vector>

using namespace std;

//insert()����ɾ��ָ��λ�õ�Ԫ��
//Ҳ����ɾ����ĳָ��λ�ÿ�ʼ��������ĳһλ��ǰ���һ�������Ԫ��
//���������ڶ���λ���ϵ��Ǹ�Ԫ��
int main()
{
	vector<int> v(10);
	vector<int>::iterator it;
	int i;

	for(i = 0; i < 10; i++)
	{
		v[i] = i;//��ȷ
		//v.push_back (i);�˷���Ϊ׷�ӣ���Ϊ����ʱ������10��0��
		//�������������20��Ԫ��,������Ԥ���е�10��
	}
	
	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;//0 - 9
	
	v.erase (v.begin () + 2);//v.begin () + 2ָ��2�����2��ɾ��

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	v.erase(v.begin () + 1, v.begin () + 5);//v.begin () + 1ָ��1��v.begin () + 5ָ��6
	                                        //��� 1 3 4 5��5��6��ǰ�棩��ɾ��

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	cout<<v.size ()<<endl;

	v.clear ();//��պ�������СΪ0
	
	cout<<v.size ()<<endl;
	cout<<v.empty ()<<endl;//�ж������Ƿ�Ϊ�գ����ǣ�����1

	return 0;
}