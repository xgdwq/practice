#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> s;

	s.push (1);
	s.push (3);
	s.push (9);
	s.push (10);

	cout<<s.top ()<<endl;

	cout<<s.size ()<<endl;

	cout<<s.empty ()<<endl;

	while(!s.empty ())
	{
		cout<<s.top ()<<" ";
		s.pop ();
	}
	cout<<endl;

	return 0;
}