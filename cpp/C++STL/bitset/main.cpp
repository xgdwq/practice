#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	bitset<10> b;// each bit is 0
	int i;

	b[0] = 1;//通过下标赋值
	b[9] = 1;

	for(i = b.size () - 1; i >= 0; i--)//the 0th bit is the lowest;
	{
		cout<<b[i];
	}
	cout<<endl;

	cout<<b.any ()<<endl;//if there is a (bit = 1); if yes,return 1
	cout<<b.none()<<endl;//if there is not a bit =1 ?
	cout<<b.count ()<<endl;//return the number of 1 in b
	cout<<b.size ()<<endl;//how many bits
	cout<<b.test (1)<<endl;//test the first bit is 1?

	b.set ();//all the bit are set 1
	for(i = b.size () - 1; i >= 0; i--)//the (b.size()-1)is the highest bit
	{
		cout<<b[i];
	}
	cout<<endl;

	b.reset ();//all the bits are set 0
	for(i = b.size () - 1; i >= 0; i--)
	{
		cout<<b[i];
	}
	cout<<endl;

	b.set (0, 1);//set the particular bit to 1
	b.set (9, 1);
	for(i = b.size () - 1; i >= 0; i--)
	{
		cout<<b[i];
	}
	cout<<endl;

	b.reset(0);//set the partcular bit to 0
	for(i = b.size () - 1; i >= 0; i--)
	{
		cout<<b[i];
	}
	cout<<endl;

	b.flip ();//~
	for(i = b.size () - 1; i >= 0; i--)
	{
		cout<<b[i];
	}
	cout<<endl;

	b.flip (0);// ~ the particular bit
	for(i = b.size () - 1; i >= 0; i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	
	cout<<b.to_ulong ()<<endl;//return an unsigned long number

	cout<<b<<endl;//output the b to the ostream derectly

	return 0;
}
