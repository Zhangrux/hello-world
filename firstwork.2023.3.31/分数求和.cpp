#include<iostream>
using namespace std;
#include<string>
int Together(int x,int y);
int main()
{
	int suma=0,sumb=0;
	int n=0,i=0,number=0;
	int a[99];
	int b[99];
	char ch='/';
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i]>>ch>>b[i];
	}

    for(i=0;i<n;i++){
    	if(b[i]==0){  //��ĸΪ0ʱ�����Ϸ���������������ѭ�� 
    		cout<<"error"<<endl;
    		break;
    	}
    	else{
    		suma=suma+a[i];
    		sumb=sumb+b[i];
    	}
    }
    if(i==n){ //˵��������Ϊb[i]==0����ѭ���� 
    	if(sumb==1){
    		cout<<suma<<endl;
    	}
    	else{
    		
    	
    	if(suma==sumb){
    		cout<<"1"<<endl;
    	} 
		else{
			if(Together(suma,sumb)==1){
				cout<<suma<<"/"<<sumb<<endl;
			}
			else{
				number=Together(suma,sumb); //�����ǵ����Լ��Ϊ����
				suma=suma/number;
				sumb=sumb/number;
				if(sumb==1){
					cout<<suma<<endl;
				} 
				else{
					if(sumb==suma){
						cout<<suma<<endl;
					}
					else
					cout<<suma<<"/"<<sumb<<endl;
					
				}
			}
		}
		}
    }
	return 0;
}
int Together(int x,int y){
	int t=0;
	int z=-1;
	if(x<y){
		t=y;
		y=x;
		x=t;
	}
	for(;z!=0;){
		z=x%y;
		x=y;
		y=z;
		if(y==1){
			break;
		}
	}
	return z;
}
