#include<iostream>

using namespace std;

class staff{
	
	private:
		char name[10];
		int no;
		int contact;
		char email[20];
		
	public:
		void setter(){
			cout<<endl<<"Enter The Name Of Staff : ";
			cin>>name;
			
			cout<<endl<<"Enter The Account Number Of Staff : ";
			cin>>no;
			
			cout<<endl<<"Enter The Phone Number Of Staff : ";
			cin>>contact;
			
			cout<<endl<<"Enter The Email Of Staff : ";
			cin>>email;
			
		}
		
		void getter(){
			cout<<"--------------------------------------------------------------------"<<endl;
			cout<<"Name        : "<<name<<endl;
			cout<<"Account No  : "<<no<<endl;
			cout<<"Phone No    : "<<contact<<endl;
			cout<<"E-mail      : "<<email<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;
			
		}
};

int main()
{
	
	cout<<"      -: BANK MANAGEMENT SYSTEM :-     "<<endl;
	cout<<"-----------------------------------------"<<endl<<endl;
	cout<<"     -:Designed and Programed By :-"<<endl;
	cout<<"-----------------------------------------"<<endl<<endl;
	cout<<"             URJA K DOBARIYA"<<endl<<endl;
	cout<<"             -: Trainer :-"<<endl;
	cout<<"-----------------------------------------"<<endl<<endl;
	cout<<"               Shivam Sir"<<endl<<endl;
	
	
	char N;
	
	cout<<"          Press N for continue..."<<endl<<endl;
	cin>>N;
	
	switch(N){
		case 'N':
		case 'n':
			cout<<"-----------------------------------------------------------------"<<endl<<endl;
//			
		break;
	}
	
	char s;
	
		cout<<"-: Press A to Log in as Administrator or S to Log in as Staff :-"<<endl<<endl;
		cin>>s;
		cout<<"-----------------------------------------------------------------"<<endl<<endl;
		
	switch(s){
		
		case 's':
		case 'S':
			cout<<"-----------------------------------------------------------------"<<endl<<endl;
			cout<<"                     -: Welcome As Staff :- "<<endl<<endl;
			cout<<"-----------------------------------------------------------------"<<endl<<endl;
		break;
	}
	
	staff obj;
	
	obj.setter();
	obj.getter();	
	
	char press;
	
	cout<<"Press [1] to Deposite the money : "<<endl;
	cout<<"Press [2] to transfer the money : "<<endl;
	cout<<"Press [3] to withdraw the money : "<<endl;
	cin>>press;
	
	switch(press){
		
		case '1':
			cout<<"Deposite service is anavailable"<<endl;
		break;
		
		case '2':
			cout<<"There is an technical error in transfer the money."<<endl;
		break;
		
		case '3':
			int withdraw;
			int balance;
			
			balance = 200000;
			
			cout<<"Withdraw the money : "<<endl;
			cin>>withdraw;
			
			cout<<"-----------------------------------------------------------"<<endl;
			cout<<"        Withdraw the money : "<<withdraw;
			cout<<"-----------------------------------------------------------"<<endl<<endl;
			cout<<"Your actual ammount is : 200000"<<endl;
			cout<<"Congrates Your Amount Has Withdraw Successfully."<<endl;
			cout<<"Your Account Balance Is : "<<balance-withdraw<<endl;	
			
	}
	
	
	
	return 0;
}
