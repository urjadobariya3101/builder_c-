#include<iostream>
#include<string.h>

using namespace std;

class train{
	
	private:
		
		char name[20];
		char source[10];
		char destination[15];
		char time[10];
		
	public:
		
		int num;
		
		void setdata(){
			cout<<endl<<"Enter Train Number : ";
			cin>>num;
			
			cout<<"Enter Train Name : ";
			cin>>name;
			
			cout<<"Enter Source : ";
			cin>>source;
			
			cout<<"Enter Destination : ";
			cin>>destination;
			
			cout<<"Enter Train Time : ";
			cin>>time;
		}
		
		void getdata(){
			
			cout<<endl<<"Train Number : "<<num<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Source : "<<source<<endl;
			cout<<"Destination : "<<destination<<endl;
			cout<<"Time : "<<time<<endl;
		}
};

int main()
{
	
	int i;
	
	int tnum;
	
	train array[3];
	
	for(i=0 ; i<3 ; i++){
		array[i].setdata();
	}
	
	cout<<endl<<"Enter Train Number : "<<endl;
	cin>>tnum;
	
	for(i=0 ; i<3 ; i++){
		if(array[i].num == tnum){
			array[i].getdata();
			break;
		}
	}
	
	return 0;
}
