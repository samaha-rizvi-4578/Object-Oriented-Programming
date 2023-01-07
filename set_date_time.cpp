#include<iostream>
#include<string>
using namespace std;



class printDateTime
{
	private:
		int date, month,year,hour,minute,second;
	public:
	printDateTime()
	{
		this->setDate(date);
		this->setMonth(month);
		this->setYear(year);
		this->setHour(hour);
		this->setMin(minute);
		this->setSec(second);
		}
	void setDate(int dd)
	{
		while(1)
		{
			cout<<"Enter date : "; 
			cin>>dd;
			if ((dd>0) && (dd<31))
				{
					date =dd;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	}
	int getDate()
   	{ return date; 
	   }
	 void setMonth(int mm){
	 	while(1)
		{
			cout<<"Enter month : "; 
			cin>>mm;
			if ((mm>0) && (mm<=12))
				{
					month=mm;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	 } 
	 int getMonth()
   	{ return month; 
	   } 	
	  void setYear(int yy){
	 	while(1)
		{
			cout<<"Enter year : "; 
			cin>>yy;
			if (yy>0)
				{
					year=yy;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	 } 
	 int getYear()
   	{ return year; 
	   }  
	   void setHour(int hh){
	 	while(1)
		{
			cout<<"Enter Hour : "; 
			cin>>hh;
			if ((hh>=0) && (hh<24))
				{
					hour=hh;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	 } 
	 int getHour()
   	{ return hour; 
	   } 
	   
	void setMin(int mm){
	 	while(1)
		{
			cout<<"Enter minute : "; 
			cin>>mm;
			if ((mm>=0) && (mm<60))
				{
					minute=mm;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	 } 
	 int getMin()
   	{ return minute; 
	   } 
	   void setSec(int ss){
	 	while(1)
		{
			cout<<"Enter second : "; 
			cin>>ss;
			if ((ss>=0) && (ss<60))
				{
					second=ss;
					break;
				}
			else 
				{
					cout<<"Invalid Input";	
				}
		}	
	 } 
	 int getSec()
   	{ return second; 
	   } 
	   		void Hour12Format(){
			int h;
			cout<<"\n\n------12 HOUR FORMAT------";
			cout<<"\n"<<date<<"-"<<month<<"-"<<year;
			if(hour<12)
			{
				cout<<"\n"<<hour<<":"<<minute<<":"<<second<<" AM";
			}
			else{
				h=hour-12;
				cout<<"\n"<<h<<":"<<minute<<":"<<second<<" PM";
			}
		}	
		void Hour24Fformat(){
			cout<<"\n\n------24 HOUR FORMAT------";
			cout<<"\n"<<date<<"-"<<month<<"-"<<year;
			cout<<"\n"<<hour<<":"<<minute<<":"<<second;
		}
		void HolidayInMont(int monthNo){
			cout<<endl;
			if(monthNo==1 || monthNo==3 || monthNo==5 || monthNo==7 || monthNo==8 || monthNo==10 || monthNo==12)
			{
				cout<<"\nNumber of holidays: 8";
			}
			else if(monthNo==2)
			{
			cout<<"\nNumber of holidays: 6";	
			}
			else{
				cout<<"\nNumber of holidays: 7";
			}
		}
};

int main()
{
	printDateTime o1;
	o1.Hour12Format();
	o1.Hour24Fformat();
	int month=o1.getMonth();
	o1.HolidayInMont(month);
}
