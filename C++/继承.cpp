//�̳�inheritant 
#include<iostream>
using namespace std;
class A{
	public:
		A(){
			
		}
		void show(){
			std::cout<<"A::show"<<std::endl;
		}
	private:
		int a;
};
class B:public A //A�Ǹ���B���� 
{
	public:
		B(){  //���캯�����ܼ̳� 
			
		}
		void show(){
			A::show();	//�ø���show�ķ��� 
			std::cout<<"B::show"<<std::endl; //����1���Ը����show �����˹�������ǿ 
		} //���̳���һ��show �ܹ��������� 
	private:
		int a; //���̳���һ��a �ܹ��������� 
};
int main()
{
	B a;
	a.show(); //����show �Լ��Ļ�Ѹ��ĸ��� 

	return 0;
	
}
