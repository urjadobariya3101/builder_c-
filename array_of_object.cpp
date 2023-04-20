#include<iostream>

using namespace std;

class Student{
	
	private:
		
		int id;
		char name[10];
		char address[15];
		
	public:
		
		void setdata();
		void getdata();
};

void Student :: setdata(){
	
	cout<<"Enter Id : ";
	cin>>id;
	
	cout<<"Enter Name : ";
	cin>>name;
	
	cout<<"Enter Address : ";
	cin>>address;
	
}

void Student :: getdata(){
	
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Address : "<<address<<endl;
	
}

int main()
{
	
	int n;
	
	cout<<"Enter size : ";
	cin>>n;
	
	Student obj[n];
	int i;
	
	for(i=0 ; i<n ; i++){
		obj[i].setdata();
	}
	
	for(i=0 ; i<n ; i++){
		obj[i].getdata();
	}
	
	return 0;
}
