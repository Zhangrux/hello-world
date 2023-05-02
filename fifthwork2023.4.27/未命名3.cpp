#include<iostream>
using namespace std;
class Number{
	public:
	int m_count1;
	int m_count2;
	int max;
	int min;
	int Getmax(int count1,int count2){
		for(;count1!=count2;){
		
		if(count1>count2){
			count1=count1-count2;
		}
		else {
			count2=count2-count1;
		}
	}
	   return count1;
	}
	int Getmin(int count1,int count2,int max){
	return  (count1*count2)/max;
	}

};
int main()
{
	Number p;

	cin>>p.m_count1;
	cin>>p.m_count2;

	p.max=p.Getmax(p.m_count1,p.m_count2);
	p.min=p.Getmin(p.m_count1,p.m_count2,p.max);

	cout<<p.max<<endl;
	cout<<p.min<<endl;
	return 0;
}
