/*Create a class called Employee that includes three pieces of information as data members—a first name (type string), a
last name (type string) and a monthly salary (type int). Your class should have a constructor that initializes the three
data members. Provide a set and a get function for each data member. If the monthly salary is not positive, set it to 0.
Write a test program that demonstrates class Employee’scapabilities. Create two Employee objects and display each
object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee’s yearly salary again.*/
#include<iostream>
#include<string>
using namespace std;

class employee{
	private:
		string f_name, l_name;
		int salary,ysal,raise;
	public:
	employee(){
		this->setF_name(f_name);
		this->setL_name(l_name);
		this->setSalary(salary);
	}	
	void setF_name(string f_name){
		cout<<"Enter First name of employee: ";
		cin>>f_name;
		this->f_name=f_name;
	}
	string getF_name(){
		return f_name;
	}
	
	void setL_name(string l_name){
		cout<<"Enter Last name of employee: ";
		cin>>l_name;
		this->l_name=l_name;
	}
	string getL_name(){
		return l_name;
	}
	
	void setSalary(int salary){
		cout<<"Enter Salary of employee: ";
		cin>>salary;
		if(salary>0){
		this->salary=salary;
		}
		else{
			this->salary=0;
		}
	}
	int getSalary(){
		return salary;
	}
	int yearSal(){
		this->ysal=12*salary;
		return ysal;
	}
	int raiseSal(){
		this->raise=ysal+(salary*0.1);
		return raise;
	}
};
int main(){
	cout<<"EMPLOYEE 1:\n";
	employee e1;
	cout<<"\nYour yearly salary is " <<e1.yearSal();
	cout<<"\nYour yearly salary after raise is: "<<e1.raiseSal();
	cout<<endl<<"\nEMPLOYEE 2:\n";
	employee e2;
	cout<<"\nYour yearly salary is " <<e2.yearSal();
	cout<<"\nYour yearly salary after raise is: "<<e2.raiseSal();
}

