#include<iostream>
using namespace std;
int main()
{
	int x=0,sum=0;
	int a=0,b=0,c=0;
	cin>>x;
	a=x%10;
	x=x/10;
	b=x%10;
	x=x/10;
	c=x%10;
	sum=a+b+c;
	cout<<sum<<endl;
	return 0;
}
