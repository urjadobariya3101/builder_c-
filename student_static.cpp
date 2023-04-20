#include<iostream>

using namespace std;

class student{
	
	private:
		int id;
		char name[10];
		int roll_no;
		int std;
		int age;
		char contact[10];
		static char institute[20];
		char address[25];
		
	public:
		void setdata();
		void getdata();
	
};

char student :: institute[20] = "Bhagavan Mahavir";

void student :: setdata(){
	
	cout<<"Enter Id : ";
	cin>>id;
	
	cout<<"Enter Name : ";
	cin>>name;
	
	cout<<"Enter Roll No : ";
	cin>>roll_no;
	
	cout<<"Enter Standard : ";
	cin>>std;
	
	cout<<"Enter Age : ";
	cin>>age;
	
	cout<<"Enter contact : ";
	cin>>contact;
	
	cout<<"Enter Address : ";
	cin>>address;
	
	cout<<endl;
}

void student :: getdata(){
	
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Roll NO : "<<roll_no<<endl;
	cout<<"Standard : "<<std<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Contact : "<<contact<<endl;
	cout<<"Address : "<<address<<endl;
	cout<<"Institute : "<<institute<<endl;
	
}

int main()
{
	
	student stud;
	
	stud.setdata();
	stud.getdata();
	
	stud.setdata();
	stud.getdata();
	
	return 0;
}


