#include<iostream>
using namespace std;
class Number{
	public:
		
	int m_k[100];//ÏµÊı 
	int m_n[100];//Ãİ´Î 
};
int main()
{
	Number a;
	Number b;

	int interrupt1=0,interrupt2=0;
	int count=0,j=0,g=0;
	int i=0,n[100],k[100];

	for(i=0;i<100;i++){
	
	cin>>n[i];
	cin>>k[i];

	if(n[i]==0){
		count++;
		if(count==1){
		
		interrupt1=i;}
	}

	if(count==2){
		interrupt2=i;
		break;
	}
	
}
for(i=0;i<=interrupt1;i++){
	a.m_k[i]=k[i];
	a.m_n[i]=n[i];
}
for(;i<=interrupt2;i++){
	b.m_k[i]=k[i];
	b.m_n[i]=n[i];
}
for(j=0;j<=interrupt1;){
	for(g=0;g<=interrupt2;){
	
	if(a.m_n[j]==b.m_n[g]){
		a.m_k[j]=a.m_k[j]+b.m_k[g];

		if(a.m_n[j]==0){
			cout<<a.m_k[j];
		}
		else if(a.m_k[j]==0){
			break;
		}
		else{
		
		cout<<a.m_k[j]<<"x"<<a.m_n[j];
		if(a.m_n[j]!=0){
			cout<<"+";
		}
		break;}
	}

	else {

	if(a.m_n[j]>b.m_n[g]){
		
		if(a.m_n[j]==0){
			cout<<a.m_k[j];
		}
		else if(a.m_k[j]==0){
			break;
		}
		else{
		
		cout<<a.m_k[j]<<"x"<<a.m_n[j];
		break;}
		
	//cout<<a.m_k[j]<<"x"<<a.m_n[j];
	break;}
	if(a.m_n[j]<b.m_n[g]){
	
		if(b.m_n[g]==0){
			cout<<b.m_k[g];
		}
		else if(b.m_k[g]==0){
			break;
		}
		else{
		
		cout<<b.m_k[g]<<"x"<<b.m_n[g];
		break;}	
	//cout<<b.m_k[g]<<"x"<<b.m_n[g];
	g++;
	}
    }
}
j++;
}

	return 0;
	
}
