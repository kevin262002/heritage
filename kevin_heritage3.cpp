#include<iostream>

using namespace std;

class Name{
	
	public:
		void info1(){
			cout<<"Employ Name : Kevin"<<endl;
		}
};

class Age{
	
	public:
		void info2(){
			cout<<"Employ age : 25"<<endl;
		}	
};

class Role{
	
	public:
		void info3(){
			cout<<"Employ Role : Manager"<<endl;
		}	
};

class Output : public Name , public Age , public Role{
	
};

int main(){
	
	Output obj;
	
	obj.info1();
	obj.info2();
	obj.info3();
	

	return 0;
}
