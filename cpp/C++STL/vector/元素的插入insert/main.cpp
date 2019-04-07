#include<iostream>
#include<vector>

using namespace std;

//inset()是将元素插入指定位置的前面，指定位置及其后面的元素向后移动

int main()
{
	vector<int> v1;//未指定大小，可以通过push_back()尾部元素扩张方式
	int i;
	for(i = 0; i < 4; i++)
	{
		v1.push_back (i);
	}

	vector<int>::iterator it1;//迭代器的类型一定要与其遍历的容器对象的元素类型一致
	
	//begin()指向第一个，而end()指向最后一个元素的下一位置
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;//结果：0 1 2 3 

	v1.insert (v1.begin (), 9);//在最前面插入9,outcome: 9 0 1 2 3
	v1.insert (v1.begin () + 2, 8); //在上面已插入的基础上，v1.begin () + 2指向元素1
	                                //，因此在1的前面插入8,结果：9 0 8 1 2 3
	v1.insert (v1.end (), 7);//在最末尾插上7，因为v1.end()指向最后元素的下一位置
	                         //result: 9 0 8 1 2 3 7
	for(it1 = v1.begin (); it1 != v1.end (); it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<endl;
	
	return 0;
}