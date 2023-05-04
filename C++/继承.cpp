//继承inheritant 
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
class B:public A //A是父，B是子 
{
	public:
		B(){  //构造函数不能继承 
			
		}
		void show(){
			A::show();	//用父的show的方法 
			std::cout<<"B::show"<<std::endl; //作用1：对父类的show 进行了功能性增强 
		} //还继承了一个show 总共有两个了 
	private:
		int a; //还继承了一个a 总共有两个了 
};
int main()
{
	B a;
	a.show(); //两个show 自己的会把父的覆盖 

	return 0;
	
}
