#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	
	public:
		
		int id;
		char name[10];
		char role[20];
		int salary;
		int experience;
		char address[50];
		char mail[25];
		int contact;
		
		void setter(){
			
			cout<<"Enter Id : ";
			cin>>id;
			
			cout<<"Enter Name : ";
			cin>>name;
			
			cout<<"Enter Role : ";
			cin>>role;
			
			cout<<"Enter Salary : ";
			cin>>salary;
			
			cout<<"Enter Experience : ";
			cin>>experience;
			
			cout<<"Enter Address : ";
			cin>>address;
			
			cout<<"Enter Mail : ";
			cin>>mail;
			
			cout<<"Enter Contact : ";
			cin>>contact;
			
			
		}
		
		void getter(){
			
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<role<<endl;
		cout<<salary<<endl;
		cout<<experience<<endl;
		cout<<address<<endl;
		cout<<mail<<endl;
		cout<<contact<<endl<<endl;
	}

};

int main(){
	
	Employee emp1, emp2, emp3;
	
	emp1.setter();
	emp1.getter();
	
	emp2.setter();
	emp2.getter();
	
	emp3.setter();
	emp3.getter();
	
	return 0;
}
