#include<conio.h>
#include<iostream>
using namespace std;
class person
{
	char name[10];
	int age;
	public:
		void read_person()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
		}
		void show_person()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class employ:public person
{
	char dept[10];
	public:
		void read_emp()
		{
			read_person();
			cout<<"Enter Department";
			cin>>dept;
		}
		void show_emp()
		{
			show_person();
			cout<<"Department: "<<dept<<endl;
		}
};
class Account:public employ
{
	float bal;
	int acco;
	public:
		void read_acc()	
		{
			read_emp();
			cout<<"Enter Account number: ";
			cin>>acco;
			cout<<"Enter Balance: ";
			cin>>bal;
		}
		void show_acc()
		{
			show_emp();
			cout<<"Account number: "<<acco<<endl;
			cout<<"Balance: "<<bal<<endl;
		}
};
int main()
{
	Account a1;
	cout<<"Enter the Informations: "<<endl;
	a1.read_acc();
	cout<<"You have entered"<<endl;
	a1.show_acc();
	return 0;
}
