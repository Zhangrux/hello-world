#include<iostream>
using namespace std;
int Judgenumber(int m,int i,int n,int *a);
int Seeknumber(int m,int i,int n,int *a);
int main()
{
	int p=0,q=0,n=0,i=0;
	int a[30]={0};
		cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(q=0;q<n;q++){
	if((Judgenumber(a[q],q,n,a))==0){ //说明前面无重复 
	if((Seeknumber(a[q],q,n,a))==2){ //在后面能找到一个 
	cout<<a[q]<<endl; 
	p++;
	}
 }

}
 if(p==0){
 	cout<<"none"<<endl;
 }
	return 0;
}
int Seeknumber(int m,int i,int n,int *a){
	int j;
	int sum=1;
	for(j=i+1;j<n;j++){
		if(m==a[j])
		sum++;
	}
	return sum;
	}
int Judgenumber(int m,int i,int n,int *a){
	int j=0;
	int count=0;
	for(j=0;j<=i;j++){
		if(a[j]==m){
		count++;
		}
	}
	if(count==1){
		return 0;
	}
	else return -1;
}
