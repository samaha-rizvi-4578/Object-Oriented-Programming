/*In Task_05, Suppose you have a claass named as Student that have multiple student objects or atleast 10 objects. Each
teacher has its ID, Name, EmailAddress, CourseCode(A student may enroll in multiples course) and its CGPA. You need to
write the setter and getter functions for each attribute. While taking input implement the following validations
1. Id must be a 4-digit number.
2. Name must be greater than 3 alphabets. Also not contains any number in it.
3. Email address length must be atleast 6 character and contains ____@___.__
4. CourseCode must be combination of Alpha Numeric number of 6 characters
While taking the input for multiple CourseCode for each student. Confirm that if student CGPA isgreater than 3,
he/she can take 6 courses.
If his GPA is greater than 2, he/she can take 5 courses. If his GPA is less than 2, he/she can take only 2 courses.
*/
#include<iostream>
#include<string>
using namespace std;

class student{
public:
int id;
float GPA;
string name;
string Emailadress;
string CourseCode[6];
int checkemail(string email)
{
	for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i]=='@')
        {
            return 1;
        }
    }
    return 0;
}

int checkcourse(string course){
	for (int i = 0; course[i] != '\0'; i++)
    {
        if (!isalnum(course[i]))
        {
        return 0;
		}
    }
    return 1;
}

void setname(){
	do{
		cout<<"Enter Name: ";
		cin>>name;
		if(name.length()<3){
			cout<<"error!enter again";
		}
	}while(name.length()<3);
}
void setEmail(){
	do{
		cout<<"Enter Email Adress: ";
		cin>>Emailadress;
		if(checkemail(Emailadress)==0){
			cout<<"error!enter again";
		}
	}while(checkemail(Emailadress)==0);
}
void setID(){
	do{
		cout<<"Enter Id: ";
		cin>>id;
		if(id<1000||id>9999){
			cout<<"error!enter again";
		}
	}while(id<1000||id>9999);
}
void setGPA(){
	do{
		cout<<"Enter GPA: ";
		cin>>GPA;
		if(GPA<0||GPA>4.0){
			cout<<"error!enter again";
		}
	}while(GPA<0||GPA>4.0);
}
void setcourse(){
	int x,i;
	if(GPA<2){
		x=2;
	}
	else if(GPA<3){
		x=5;
	}
	else{
		x=6;
	}
	for(i=0;i<x;i++){
		do{
			cout<<"Enter course code"<<i+1<<": ";
			cin>>CourseCode[i];
			if(checkcourse(CourseCode[i])==1){
				cout<<"Error!enter again";
			}
		}while (checkcourse(CourseCode[i])==1);
	}
}
string getname()
{
	cout<<name;
}
string getEmailAdress()
{
	return Emailadress;
}
int getid()
{
	return id;
}
float getGPA()
{
	return GPA;
}
string getcourse()
{
	int i;
	if(GPA>3)
	{
	for(i=0;i<6;i++)
	{
		return CourseCode[i];
	}
}
else 
{
	for(i=0;i<2;i++)
	{
		return CourseCode[i];
	}

}
}
};
int main()
{
	int i;
	student o[10];
	for(i=0;i<10;i++)
	{
	o[i].setname();
	o[i].setID();
	o[i].setGPA();
	o[i].setEmail();
	o[i].setcourse();
}
	for(i=0;i<10;i++)
	{
	o[i].getname();
	o[i].getid();
	o[i].getGPA();
	o[i].getEmailAdress();
	o[i].getcourse();
}

}
