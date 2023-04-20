#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	private:
		
		int id;
		char name[10];
		
	public:
		~Employee(){
			cout<<"Default"<<endl;
		}
		
		Employee(int i, char n[]){
			id = i;
			strcpy(name,n);
			
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	
	char d[10] = "Dhruvin";
	
	Employee obj(10,d);
	
	
	return 0;
}
