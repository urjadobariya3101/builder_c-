#include<iostream>
#include<string.h>

using namespace std;

class hotel{
	
	public:
		
		int id;
		char name[15];
		int count;
		int size;
		int year;
		char address[20];
		int rate;
		char website[30];
		
		void setter(int id, char name[], int count, int size, int year, char address[], int rate, char website[]){
			this -> id = id;
			strcpy(this -> name,name);
			this -> count = count;
			this -> size = size;
			this -> year = year;
			strcpy(this -> address,address);
			this -> rate = rate;
			strcpy(this -> website,website);
			
		}
		
		void getter(){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Staff count : "<<count<<endl;
			cout<<"Size : "<<size<<endl;
			cout<<"Established Year : "<<year<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Rate : "<<rate<<endl;
			cout<<"Website : "<<website<<endl;
		}
};

int main()
{
	
	hotel staff;
	
	staff.setter(1, "Chandresh", 12 , 14, 2019, "Hirabaug", 4, "www.amirashotel");
	staff.getter();
	
	return 0;
}
