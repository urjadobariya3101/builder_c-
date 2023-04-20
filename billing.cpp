#include<iostream>

using namespace std;

class bill{
	
	public:
		
		int id;
		char name[40];
		int qty;
		int tax;
		int dis;
		
		int setter(){
			
			cout<<"Enter Item Number : ";
			cin>>id;
			
			cout<<"Enter Item Name : ";
			cin>>name;
			
			cout<<"Enter Quantity : ";
			cin>>qty;
			
			cout<<"Enter Tax : ";
			cin>>tax;
			
			cout<<"Enter Discount : ";
			cin>>dis;
		
			return id;
		}
		
		
		void getter(){
			
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<qty<<endl;
			cout<<tax<<endl;
			cout<<dis<<endl<<endl;
		
		}
		
	
};

int main(){
	
	bill obj1[2];
	int i,j,a[10];
	
	for(i=0 ; i<=1 ; i++){
		a[i] = obj1[i].setter();
	}
	

	for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<2; j++) { 
		
			if(a[i]>a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }	
    
	for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++) { 
		
			if(obj1[j].id == a[i]) {
				
               obj1[j].getter();
            }
        }
    }	
    
    
}
