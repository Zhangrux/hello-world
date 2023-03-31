#include<iostream>
#include<string.h> 
using namespace std;
int Frontdisppear(char c,int i,string ch);
int Appeartimes(char c,int i,string ch);
int main(){
	//出现次数越多的字母赋更大的权重 
	int n=0,k=0,p=0,q=0,j=0,i=0,sum=0,t=0;
	int count[99];
	string ch;
	cin>>ch;
	for(i=0;ch[i]!='\0';i++){
	if(Frontdisppear(ch[i],i,ch)==0){
	    //前面没有出现过的表示一种字母
	
		
		//判断这种字母出现的次数   
		count[k]=Appeartimes(ch[i],i,ch);
		k++;
		
	}
		
	} 
	//冒泡排序 后依次赋权重 
	for(q=0;q<k;q++){
		for(p=0;p<n-q-1;p++){
			if(count[p]<count[p+1]){
				t=count[p];
				count[p]=count[p+1];
				count[p+1]=t;
			}
		}
	}
	for(j=0;j<k;j++){
		sum=sum+count[j]*(26-j);
	}
	cout<<sum<<endl;
	
	return 0;
}
int Frontdisppear(char c,int i,string ch){ //判断在前面是否出现过 
	int j=0;
    int	sum=0;
	for(j=0;j<i;j++){
		if(ch[j]==c){
			return -1;
		}
		else sum++;
	}
	if(sum==i){
		return 0;
	}
}
int Appeartimes(char c,int i,string ch){ //判断出现的次数 
    int count;
    int j;
	for(j=i;ch[j]!='\0';j++){
		if(c==ch[j]){
			count++;
		}
	}
	return count;
} 
