#include<iostream>
using namespace std;
class Number{
	public:
	int m_yu;
	int m_shang[200];
	int m_count1;
	int m_count2; 

	void Printnumber(int count1,int count2){
		int i=0,j=0;
		m_yu=count1;
		for(i=0;i<200;i++){
			count1=m_yu*10;
		    m_yu=count1%count2;	
		    m_shang[i]=count1/count2;
		    if(m_yu==0){
		    	break;
		    }
		}
		if(i==200){
			for(i=0;i<200;i++){
				cout<<m_shang[i];
			}
		}else{
			for(j=0;j<i;j++){
				cout<<m_shang[j];
			}
			for(;i<200;i++){
				cout<<"0";
			}
		}
		cout<<endl;

	}
};
int main()
{
   Number p;
   char x='/';
	cin>>p.m_count1>>x>>p.m_count2;
	cout<<"0.";
    p.Printnumber(p.m_count1,p.m_count2);
	return 0;
}
