#include<iostream>
using namespace std;
class A{
public:
void show(){
	std::cout<<"class A"<<std::endl;
}	
};
class AA{
public:
void show(){

	std::cout<<"class AA"<<std::endl;
	a.show();  //�ð�����ϵ 
}	
private:
	A a;
};
int main()
{
	AA A;
	A.show();
	 
	return 0;
}
