#include<iostream>

using namespace std;

class mother{
	
	public:
		void display1(){
			cout<<"Humble"<<endl;
		}
};

class daugther : public mother{
	
	public:
		void display2(){
			cout<<"caring"<<endl;
		}
};

int main(){
	
	daugther obj;
	
	obj.display1();
	obj.display2();

	return 0;
}
