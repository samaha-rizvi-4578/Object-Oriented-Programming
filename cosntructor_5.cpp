/*(Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that your heart
rate stays within a safe range suggested by your trainers and doctors. According to the American Heart
Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736),the formula for calculating
your maximum heart rate in beats per minute is 220 minus your age in years. Your target heart rate is a
range that is 50–85% of your maximum heart rate. [Note: These formulas are estimates provided by the
AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the
individual. Always consult a physician or qualified health care professional before beginning or
modifying an exercise program.] Create a class called HeartRates. The class attributes should include the
person’s first name, last name and date of birth (consisting of separate attributes for the month, day and
year of birth). Your class should have a constructor that receives this data as parameters. For each
attribute provide set and get functions. The class also should include a function getAge that calculates
and returns the person’s age (in years), a function getMaxiumumHeartRate that calculates and returns
the person’s maximum heart rate and a function getTargetHeartRate that calculates and returns the
person’s target heart rate. Since you do not yet know how to obtain the current date from the
computer, function getAge should prompt the user to enter the current month, day and year before
calculating the person’s age. Write an application that prompts for the person’s information, instantiates
an object of class HeartRates and prints the information from that object— including the person’s first
name, last name and date of birth—then calculates and prints the person’s age in (years), maximum
heart rate and target-heart-rate range.*/
#include<iostream>
#include<string>
using namespace std;
class HeartRates{
	string f_name, l_name;
	int month, day, year,dd,mm,yy, age,heart_rate;
	float target_rate50, target_rate85;
	public:
	HeartRates(string f_name, string l_name, int day, int month, int year){
		this->setf_name(f_name);
		this->setl_name(l_name);
		this->setdate(day);
		this->setmonth(month);
		this->setyear(year);
	}
	void setf_name(string f_name){
		this->f_name=f_name;
	}
	string getf_name(){
		return f_name;
	}
	void setl_name(string l_name){
		this->l_name=l_name;
	}
	string getl_name(){
		return l_name;
	}
	void setdate(int day){
			if(day>0 && day<=31){
			this->day=day;
		}
		else{
			this->day=1;
		}
		}
		int getdate(){
			return day;
		}
		void setmonth(int month){
			if(month>0 && month<=12){
			this->month=month;
		}
		else{
			this->month=1;
		}
		}
		int  getmonth(){
			return month;
		}
		void setyear(int year){
			this->year=year;
		}
		int getyear(){
			return year;
		}
	int getage(int dd, int mm, int yy){
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
		this->age=yy-year;
		return age;
	}
	int getMaximumHeartRate(){
		this->heart_rate=220-getage(dd,mm,yy);
		return heart_rate;
	}
	void getTargetHeartRate(){
		this->target_rate50=0.50*getMaximumHeartRate();
		this->target_rate85=0.85*getMaximumHeartRate();
		cout<<"\nTARGET HEART RATE RANGE: "<<target_rate50<<" - "<<target_rate85<<"bpm\n";
	}
	void printDetails(){
		cout<<"\n\n***INFORMATION***\n";
		cout<<"FIRST NAME: "<<getf_name();
		cout<<"\nLAST NAME: "<<getl_name();
		cout<<"\nDATE OF BIRTH: "<<getdate()<<"-"<<getmonth()<<"-"<<getyear();
		cout<<"\nMAXIMUM HEART RATE: "<<getMaximumHeartRate();
		getTargetHeartRate();
	}
};
int main(){
	string f_name, l_name;
	int dd,mm,yy;
	cout<<"****TARGET HEART RATE CALCULATOR****\n\n";
	cout<<"Enter your first name: ";
	cin>>f_name;
	cout<<"Enter your last name: ";
	cin>>l_name;
	cout<<"Enter your date of birth(dd-mm-yy): ";
	cin>>dd>>mm>>yy;
	HeartRates person1(f_name, l_name, dd,mm,yy);
	cout<<"Enter current day month and year(dd-mm-yy):";
	cin>>dd>>mm>>yy;
	person1.getage(dd,mm,yy);
	person1.printDetails();
	
	return 0;
}

