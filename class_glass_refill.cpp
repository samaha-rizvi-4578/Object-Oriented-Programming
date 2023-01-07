//c++ program to practice classes and objects
/*crate a class glass which ask user to enter
 the ml they have drank from it and refill 
 it if user wants to refill it*/
#include<iostream>
#include<string>
using namespace std;
 class Glass{
 	private:
 		int level;
 		char choice;
 	public:
	 Glass(){
	 	level=200;
	 }	
	 void drink(int ml){
		level=level-ml;
		cout<<level<<endl;
		if(level<100){
			cout<<"do you want to refill ? press y for yes\n";
			cin>>choice;
			choice=toupper(choice);
			if(choice=='Y'){
			refil();}
		}
	 }
	 void refil()
	 {
	 	level=200;
	 	cout<<"\nGLASS REFILLED!!!\n";
	 //	cout<<"how many ml have you drank?\n";
	 //	cin>>level;
	 //	drink(level);
	 }
 };
 int main()
 {
 	int ml;

 cout<<"how many ml have you drank?\n";
 cin>>ml;
  Glass p1;
 p1.drink(ml);
 return 0;
 }
