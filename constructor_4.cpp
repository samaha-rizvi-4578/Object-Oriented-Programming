/*Create a class called Date that includes three pieces of information as data
members—a month (type int), a day (type int) and a year (type int). Your class should have constructor
with three parameters that uses the parameters to initialize the three data members. For the purpose of
this exercise, assume that the values provided for the year and day are correct, but ensure that the
month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for each
data member. Provide a member function displayDate that displays the month, day and year separated
by forward slashes (/). Write a test program that demonstrates class Date’s capabilities.*/
#include<iostream>
#include<string>
using namespace std;
class date{
	private:
	int month, day, year;
	public:
		date(int date, int month, int year){
			this->setdate(date);
			this->setmonth(month);
			this->setyear(year);
			this->displaydate();
		}
		void setdate(int dd){
			cout<<"Enter day : "; 
			cin>>dd;
			if(dd>0 && dd<=31){
			this->day=dd;
		}
		else{
			this->day=1;
		}
		}
		int getdate(){
			return day;
		}
		void setmonth(int mm){
			cout<<"Enter month : "; 
			cin>>mm;
			if(mm>0 && mm<=12){
			this->month=mm;
		}
		else{
			this->month=1;
		}
		}
		int  getmonth(){
			return month;
		}
		void setyear(int yy){
			cout<<"Enter year : "; 
			cin>>yy;
			this->year=yy;
		}
		int getyear(){
			return year;
		}
		void displaydate(){
			cout<<"\n"<<getdate()<<"/"<<getmonth()<<"/"<<getyear();
		}
		
};
int main(){
	int dd,mm,yy;
	date d1(dd,mm,yy);
}

