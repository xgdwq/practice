#include<iostream>
#include<vector>

using namespace std;

//inset()�ǽ�Ԫ�ز���ָ��λ�õ�ǰ�棬ָ��λ�ü�������Ԫ������ƶ�

int main()
{
	vector<int> v1;//δָ����С������ͨ��push_back()β��Ԫ�����ŷ�ʽ
	int i;
	for(i = 0; i < 4; i++)
	{
		v1.push_back (i);
	}

	vector<int>::iterator it1;//������������һ��Ҫ������������������Ԫ������һ��
	
	//begin()ָ���һ������end()ָ�����һ��Ԫ�ص���һλ��
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;//�����0 1 2 3 

	v1.insert (v1.begin (), 9);//����ǰ�����9,outcome: 9 0 1 2 3
	v1.insert (v1.begin () + 2, 8); //�������Ѳ���Ļ����ϣ�v1.begin () + 2ָ��Ԫ��1
	                                //�������1��ǰ�����8,�����9 0 8 1 2 3
	v1.insert (v1.end (), 7);//����ĩβ����7����Ϊv1.end()ָ�����Ԫ�ص���һλ��
	                         //result: 9 0 8 1 2 3 7
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;
	
	return 0;
}