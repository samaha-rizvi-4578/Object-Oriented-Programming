/*A university is deciding to upgrade its system. In order to upgrade, you need to implement the following scenario as
shown in the figure: Note the following:
• The class student has a function that displays all the information about the student.
• Class marks is derived from class student and has a function that displays all the marks obtained in the courses by
the students.
• Class result is derived from class marks. This class has a function that calculates the total marks and then calculates
the average marks. It then displays both the total and the average marks.
• In the main function you are required to do the following:
• Create an object of the result class.
• Then display the student details, the marks obtained in each course and the total and the average marks.*/
#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int id;
		string name;
	public:
		student(){
			
		}
		student(string std_name, int std_id)
		{	
		this->setname(std_name);
		this->setid(std_id);
		}
		void setname(string name){
			this->name=name;
		}
		string getname(){
			return name;
		}
		void setid(int id){
			while(1){
			if(id>=1000 && id<10000){
				this->id=id;
				break;
			}
			else{
			cout<<"Student id must contain 4 integers. ENTER AGAIN!!\n";
			cout<<"Enter student id: ";
			cin>>id;
			cout<<endl;
			}	
			}
		}
		int getid(){
			return id;
		}
		void getstudentdetails(){
			cout<<"\n\n----STUDENT DETAILS----\n";
			cout<<"NAME: "<<getname();
			cout<<"\nID: "<<getid();
		}	
};
class marks: public student{
	protected:
		int marks_oop, marks_pf, marks_ds, marks_db;
	public:
		marks(string name, int id):student(name, id){
			this->setoop();
			this->setpf();
			this->setds();
			this->setdb();
		}
		void setoop(){
			while(1){
			cout<<"Enter marks in oop: ";
			cin>>marks_oop;
			if(marks_oop>=0 && marks_oop<=100){
				break;
			}
			cout<<"\nMarks must lie between 0 and 100. ENTER AGAIN!!\n";	
			}	
		}
		int getoop(){
			return marks_oop;
		}
		void setpf(){
			while(1){
			cout<<"Enter marks in pf: ";
			cin>>marks_pf;
			if(marks_pf>=0 && marks_pf<=100){
				break;
			}
			cout<<"\nMarks must lie between 0 and 100. ENTER AGAIN!!\n";	
			}
		}
		int getpf(){
			return marks_pf;
		}
		void setds(){
			while(1){
			cout<<"Enter marks in ds: ";
			cin>>marks_ds;
			if(marks_ds>=0 && marks_ds<=100){
				break;
			}
			cout<<"\nMarks must lie between 0 and 100. ENTER AGAIN!!\n";	
			}
		}
		int getds(){
			return marks_ds;
		}
		void setdb(){
			while(1){
			cout<<"Enter marks in db: ";
			cin>>marks_db;
			if(marks_db>=0 && marks_db<=100){
				break;
			}
			cout<<"\nMarks must lie between 0 and 100. ENTER AGAIN!!\n";	
			}
		}
		int getdb(){
			return marks_db;
		}
		
		void getmarks(){
		student::getstudentdetails();	
		cout<<"\n__MARKS__\n";
		cout<<"OOP: "<<getoop();
		cout<<"\nPF: "<<getpf();
		cout<<"\nDS: "<<getds();
		cout<<"\nDB: "<<getdb();	
		}	
};
class result: public marks{
	protected:
		int total_marks;
		double avg_marks;
	public:
		result(string name, int id):marks(name, id){
			
		}
		int gettotal(){
			total_marks=marks_oop+marks_pf+marks_ds+marks_db;
			return total_marks;
		}
		double getavg(){
			avg_marks=((float)total_marks/4);
			return avg_marks;
		}
		void display(){
		marks::getmarks();
		cout<<"\n__RESULT__\n";
		cout<<"TOTAL MARKS: "<<gettotal();
		cout<<"\nAVERAGE MARKS: "<<getavg();
		}	
};
int main(){
	string name;
	int id;
	cout<<"Enter name of student: ";
	cin>>name;
	cout<<"Enter id of student: ";
	cin>>id;
	result std1(name, id);
	std1.display();
	return 0;
}

