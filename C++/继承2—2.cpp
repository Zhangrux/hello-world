#include<iostream>
using namespace std;
class A{
public:
virtual void show(){  //��virtual �����show ��һ���麯�� 
	std::cout<<"class A"<<std::endl;
}	
};
class AA:public A{ //�̳� AA���ӣ�A�Ǹ� 
public:
void show(){
   A::show(); //�ü̳й�ϵ �����˹��� 
   std::cout<<"class AA"<<std::endl;
	
}	
private:
	A a;
};
int main()
{
	AA aa;
	A &a=aa;//& ������  //�Ӷ���ӳ�丸���� 
	A *a1=&aa;//& ��ȡ��ַ  //����ӳ��  
	a.show();//class A
	a1->show(); //a1��ָ�룬��Ҫ�ü�ͷ����ʽ  //class A
    A a2=aa;  //ǿ������ת�� 
	a2.show(); //class A
	 
	return 0;
}
