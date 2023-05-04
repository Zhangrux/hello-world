#include<iostream>
using namespace std;
class Number{
	public:
	int m_count;
	int m_sum;
	int m_product;
	int m_square;
	int Getsum(int count){
		int a[3];
		int sum=0;
		int i=0;
		for(i=0;i<3;i++){
		a[i]=count%10;
		count=count/10;
		}
		for(i=0;i<3;i++){
			sum=a[i]+sum;
		}
		return sum;
	}
	int Getproduct(int count){
		int a[3];
		int product=1;
		int i=0;
		for(i=0;i<3;i++){
		a[i]=count%10;
		count=count/10;
		}
		for(i=0;i<3;i++){
			product=a[i]*product;
		}
		return product;	
	}
	int Getsquare(int count){
		int a[3];
		int product=1;
		int i=0;
		int square=0;
		for(i=0;i<3;i++){
		a[i]=count%10;
		a[i]=a[i]*a[i];
		count=count/10;
		}
		square=a[i]+square;	
		return square;
	}
	int Judgeprime(int m){
		int i=1;
		int count=0;
		for(i=1;i<=m;i++){
		if(m%i==0){
			count++;
		}	
		}
		if(count==2){
			return 1;
		}
		else return 0;
	}
};
int main(){
	Number m;
	int count=0,sum=0;
	int a1=0,a2=0,a3=0,a4=0;
	for(m.m_count=100;m.m_count<=999;m.m_count++){
		m.m_product=m.Getproduct(m.m_count);
		m.m_sum=m.Getsum(m.m_count);
		m.m_square=m.Getsquare(m.m_count);
		a1=m.Judgeprime(m.m_product);
		a2=m.Judgeprime(m.m_sum);
		a3=m.Judgeprime(m.m_square);
		a4=m.Judgeprime(m.m_count);
		if(a1==1||a2==1||a3==1||a4==1){
			count++;
			sum=sum+m.m_count;
		}
	}
	cout<<count<<" "<<sum<<endl;
	
}
