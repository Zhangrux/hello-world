#include<iostream>
using namespace std;
class A{
public:
virtual void show(){  //有virtual 这里的show 是一个虚函数 
	std::cout<<"class A"<<std::endl;
}	
};
class AA:public A{ //继承 AA是子，A是父 
public:
void show(){
   A::show(); //用继承关系 增加了功能 
   std::cout<<"class AA"<<std::endl;
	
}	
private:
	A a;
};
int main()
{
	AA aa;
	A &a=aa;//& —引用  //子对象映射父对象 
	A *a1=&aa;//& —取地址  //向上映射  
	a.show();//class A
	a1->show(); //a1是指针，需要用箭头的形式  //class A
    A a2=aa;  //强制类型转换 
	a2.show(); //class A
	 
	return 0;
}
