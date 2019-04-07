#include<iostream>
#include<vector>

using namespace std;

//insert()可以删除指定位置的元素
//也可以删除从某指定位置开始，到其后的某一位置前面的一段区间的元素
//但不包括第二个位置上的那个元素
int main()
{
	vector<int> v(10);
	vector<int>::iterator it;
	int i;

	for(i = 0; i < 10; i++)
	{
		v[i] = i;//正确
		//v.push_back (i);此方法为追加，因为声明时候即已有10个0，
		//如果这样，会有20个元素,而不是预期中的10个
	}
	
	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;//0 - 9
	
	v.erase (v.begin () + 2);//v.begin () + 2指向2，因此2被删除

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	v.erase(v.begin () + 1, v.begin () + 5);//v.begin () + 1指向1，v.begin () + 5指向6
	                                        //因此 1 3 4 5（5在6的前面）被删除

	for(it = v.begin (); it != v.end (); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	cout<<v.size ()<<endl;

	v.clear ();//清空后，向量大小为0
	
	cout<<v.size ()<<endl;
	cout<<v.empty ()<<endl;//判断向量是否为空，如是，返回1

	return 0;
}