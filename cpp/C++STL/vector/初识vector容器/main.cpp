#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1;//未指定大小，可以通过push_back()尾部元素扩张方式

	vector<double> v2(10);//制定了大小，初值均为0

	vector<double> v3(10, 8.6);//初值均为8.6

	int i;
	for(i = 0; i < 10; i++)
	{
		v1.push_back (i);
	}

	vector<int>::iterator it1;//迭代器的类型一定要与其遍历的容器对象的元素类型一致
	
	//begin()指向第一个，而end()指向最后一个的下一位置
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;

	for(i = 0; i < 10; i++)
	{
		cout<<v2[i]<<" ";//通过下标方式访问
	}
	cout<<endl;

	for(i = 0; i < 10; i++)
	{
		cout<<v3[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}