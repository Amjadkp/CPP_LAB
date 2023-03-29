#include<iostream>
using namespace std;

class obj
{
	private:
	static int count;
	public:
	obj()
	{
		count++;
	}
	void showcount()
	{
		cout<<"number of the objects : "<<endl;
	}
};
int obj :: count=0;
int main()
{
	int choice=1;
	while(choice=1)
	{
		cout<<"enter 1 to creatr an object."<<endl;
		cout<<"enter 2 or any number to exit "<<endl;
		cout<<"enter your choice : ";
		cin>>choice;
		if (choice!=1)
		break;
		obj *ob=new obj;
		ob->showcount();
		delete ob;
	}
	return 0;
}	
