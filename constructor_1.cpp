/*(Account Class) Create an Account class that a bank might use to represent customers’ bank accounts. Include a data
member of type int to represent the account balance. Provide a constructor that receives an initial balance and uses it
to initialize the data member. The constructor should validate the initial balance to ensure that it’s greater than or
equal to 0. If not, set the balance to 0 and display an error message indicating that the initial balance was invalid.
Provide three member functions. Member function credit should add an amount to the current balance. Member
function debit should withdraw money from the Account and ensure that the debit amount does not exceed the
Account’s balance. If it does, the balance should be left unchanged and the function should print a message indicating
"Debit amount exceeded account balance." Member function getBalance should return the current balance. Create a
program that creates two Account objects and tests the member functions of class Account.*/
//cosntructor
#include<iostream>
#include<string>
using namespace std;

class Account{
	private:
		int balance;
	public:
	Account(int balance){
		if(balance>=0){
			this->balance=balance;
		}
		else{
			this->balance=0;
			cout<<"invalid balance!";
		}
	}
	void credit(int credit){
		this->balance=balance+credit;
	}	
	void debit(int debit){
		if(debit<=balance){
			this->balance=balance-debit;
		}
		else{
			cout<<"\nDebit amount exceeded account balance.";
		}
	}
	int getbalance(){
		return balance;
	}
};
int main()
{
	int balance,credit,debit;
	char choice;
	//object 1
	cout<<"TEST OBJECT 1:\n";
	cout<<"Enter your initial balance: ";
	cin>>balance;
	Account c1(balance);
	cout<<"\nDo you want to credit or debit amount?  (c for credit|| d for debit)\n";
	cin>>choice;
	choice=toupper(choice);
	switch (choice){
		case 'C':{
			cout<<"\nEnter amount to add in credit: ";
			cin>>credit;
			c1.credit(credit);
			break;
		}
		case 'D':{
			cout<<"\nEnter withdrawl amount: ";
			cin>>debit;
			c1.debit(debit);
			break;
		}
	}
	cout<<"\nYour current balance is: "<<c1.getbalance();

	//object 2
	cout<<endl<<endl;
	cout<<"TEST OBJECT 2:\n";
	cout<<"Enter your initial balance: ";
	cin>>balance;
	Account c2(balance);
	cout<<"\nDo you want to credit or debit amount?  (c for credit|| d for debit)\n";
	cin>>choice;
	choice=toupper(choice);
	switch (choice){
		case 'C':{
			cout<<"\nEnter amount to add in credit: ";
			cin>>credit;
			c2.credit(credit);
			break;
		}
		case 'D':{
			cout<<"\nEnter withdrawl amount: ";
			cin>>debit;
			c2.debit(debit);
			break;
		}
	}
	cout<<"\nYour current balance is: "<<c2.getbalance();
	return 0;
}

