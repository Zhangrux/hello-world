#include<iostream>
#include<string>
using namespace std;
int Stituation3(string ch);
int Stituation2(string ch);
int Stituation1(string ch);
int main(){
	int i=0,j=0;
	string ch;
	string s;
	cin>>ch;
if((Stituation3(ch))==0){
	if((Stituation2(ch))==0){
		for(i=0;ch[i]!='\0';i++){
		if(ch[i]!='@'){
			s[j]=ch[i];
			j++;
		}	
		}
		if((Stituation1(s))==0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		
	}else cout<<"no"<<endl;
}else cout<<"no"<<endl;


	return 0;
}

int Stituation1(string s){
	int i=0;
	
	for(i=0;s[i]!='\0';i++){
		if('a'<s[i]<'z' ||'A'<s[i]<'Z' || '0'<s[i]<'9' ||s[i]=='_'||s[i]=='-' )
		{
			return 0;
		}
		else return -1;
	}
	
}
int Stituation2(string ch){
	int p=0;
	int count=0;
	if(ch[0]=='@'){
		return -1;
	}
	else{
	
	for(p=0;ch[p]!='\0';p++){
		if(ch[p]=='@'){
			count++;
		}
	}
}
if(count==1){
	if(ch[p-1]=='@'){
		return -1;
	}
	else{
		return 0;
    	}
   }
}

int Stituation3(string ch){
	int i;
	int count=0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]=='.'){
			count++;
		}
	}
if(count==1){

		if(ch[i-1]=='.'){
			return -1;
		}
    	else{
		
		for(i=0;ch[i]!='\0';i++){
		if(ch[i]=='.'){
	    if(i!=0){
		  if(ch[i-1]=='@'){
			return -1;
		}
		  else return 0;}
	
	else return 0;
	}		}


}}
else{
return -1;
}
}
