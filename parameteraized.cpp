#include<iostream>

using namespace std;

class para{
	
	private:
		int a;
		int b;
		
	public:
		para(int a, int b){
			int c;
			
			cout<<"Sum : "<<a+b<<endl;
			
		}
};

int main()
{
	
	para obj(10,20);
	

	
	return 0;
}
