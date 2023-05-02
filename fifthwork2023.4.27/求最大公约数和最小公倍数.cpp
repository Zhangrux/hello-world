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
	int Getmin(int count1,int count2){
	return  (count1*count2)/max;
	}

};
int main()
{
	
	return 0;
}
