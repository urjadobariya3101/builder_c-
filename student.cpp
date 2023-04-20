#include<iostream>

using namespace std;

class read{
	
	public:
		int id;
		char name[10];
		int std;
		
		void setter(){
			cout<<"Enter Student Id : "<<endl;
			cin>>id;
			
			cout<<"Enter Student Name : "<<endl;
			cin>>name;
			
			cout<<"Enter Student Standard : "<<endl;
			cin>>std;
		}
		
};

class print{
	
	public:
	
		read r;
		
		void getter(){
			cout<<endl<<"Id : "<<r.id<<endl;
			cout<<"Name : "<<r.name<<endl;
			cout<<"Standard : "<<r.std<<endl;
		}	
};

int main()
{
	
	print student;
	
	student.r.setter();
	student.getter();
	
	return 0;
}
