#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin>>a>>b>>c;
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	cout<<"max among three :"<<max;
	return 0;
}
