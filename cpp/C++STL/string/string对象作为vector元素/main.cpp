#include<iostream>
#include<vector>
#include<string>
//#include<algorithm>

using namespace std;

int main()
{
	vector<string> v;
	
	v.push_back ("wang");
	v.push_back ("qiang");

	cout<<v[0]<<endl;
	cout<<v[1]<<endl;

	cout<<v[0][1]<<endl;
	cout<<v[1][2]<<endl;

	return 0;
}
