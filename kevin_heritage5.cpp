#include<iostream>

using namespace std;

class A{
	
	public:
		int id;
		char name[20];
		char role[20];
		void satter1(){
			cout<<"Enter Id : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Role : ";
			cin>>role;
			
		}
		
		
};

class B : public A{
	
	public:
		int salary;
		int exp;
		void setter2(){
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter Experience : ";
			cin>>exp;
		}
};

class C : public B{
	
	public:
		char cmp_name[20];
		char add[20];
		
		void satter3(){
			cout<<"Enter Compney Name : ";
			cin>>cmp_name;
			cout<<"Enter Address : ";
			cin>>add;
		}
		void getter1(){
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<role<<endl;
			cout<<salary<<endl;
			cout<<exp<<endl;
		}
		
			
};

class D : public C{
	
	public:
		char email[20];
		int contact;
		void setter4(){
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter Contact : ";
			cin>>contact;
		}
		void getter2(){
			cout<<cmp_name<<endl;
			cout<<add<<endl;
			cout<<email<<endl;
			cout<<contact<<endl;
		}
};

int main(){
	
	D obj;
	
	obj.satter1();
	obj.setter2();
	obj.satter3();
	obj.setter4();
	obj.getter1();
	obj.getter2();
	

	return 0;
}
