#include<iostream>

using namespace std;

class Animal{
	
	public:
		char name[20];
		int age;
		
		void set_value1(){
			cout<<"Name : Lion"<<name<<endl;
			cout<<"Age : 5"<<age<<endl;
		}
		
};

class Zebra : public Animal{
	
	public:
		void set_value2(){
			cout<<"Origin : USA"<<endl;
			cout<<"Age : 10"<<endl;	
	}
};

class Dolphin : public Animal{
	
	public:
		void set_value3(){
			cout<<"Origin : Africa"<<endl;
			cout<<"Age : 50"<<endl;
		}	
};
int main(){
	
	Zebra obj1;
	Dolphin obj2;
	
	obj1.set_value1();
	obj1.set_value2();
	
	obj2.set_value1();
	obj2.set_value3();
	
	
	return 0;
}
