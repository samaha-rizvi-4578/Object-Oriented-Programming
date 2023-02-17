/*(Rational Class) Create a class called Rational for performing arithmetic with fractions. Write a program to test
your class. Use integer variables to represent the private data of the class—the numerator and the denominator.
Provide a constructor that enables an object of this class to be initialized when it’s declared. The constructor
should contain default values in case no initializers are provided and should store the fraction in reduced form.
For example, the fraction 2
4

would be stored in the object as 1 in the numerator and 2 in the denominator. Provide public member functions
that perform each of the following tasks:
a) Adding two Rational numbers. The result should be stored in reduced form.
b) Subtracting two Rational numbers. The result should be stored in reduced form.
c) Multiplying two Rational numbers. The result should be stored in reduced form.
d) Dividing two Rational numbers. The result should be stored in reduced form.
e) Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator.
f) Printing Rational numbers in floating-point format.*/
#include<iostream>
using namespace std;
class rational{
	private:
		int numerator, denomenator;
	public:	
		rational(int numerator=0, int denomenator=1){
			this->setnumerator(numerator);
			this->setdenomenator(denomenator);
			reduce();
		}
		
		void setnumerator(int numerator){
			this->numerator=numerator;
		}
		void setdenomenator(int denomenator){
			this->denomenator=denomenator;
		}
		
		int getnumerator(){
			return numerator;
		}
		int getdenomenator(){
			return denomenator;
		}
		
		void reduce()
		 {
		 int largest = numerator > denomenator ? numerator : denomenator;
		 int gcd = 0; 
		
		 for ( int i = 2; i <= largest; ++i ){
		 if ( numerator % i == 0 && denomenator % i == 0 ){
		 gcd = i;
		 }
		}
		 if (gcd != 0) {
		 this->numerator /= gcd;
		 this->denomenator /= gcd;
		 }
		 }
		 void add(rational o1, rational o2){
			this->numerator=(o1.getnumerator()*o2.getdenomenator())+(o2.getnumerator()*o1.getdenomenator());
			this->denomenator=o1.getdenomenator()*o2.getdenomenator();
			reduce();
			
		}
		void subtract(rational o1, rational o2){
			this->numerator=(o1.getnumerator()*o2.getdenomenator())-(o2.getnumerator()*o1.getdenomenator());
			this->denomenator=o1.getdenomenator()*o2.getdenomenator();
			reduce();	
		}
		void multiply(rational o1, rational o2){
			this->numerator=o1.getnumerator()*o2.getnumerator();
			this->denomenator=o1.getdenomenator()*o2.getdenomenator();
			reduce();
		}
		void divide(rational o1, rational o2){
			int temp;
			temp=o2.numerator;
			o2.numerator=o2.denomenator;
			o2.denomenator=temp;
			multiply(o1, o2);
		}
		void printfraction() {
			cout<<"\n\nRESULT:\n";
			cout<<"In Fraction: "<<getnumerator()<<" / "<< getdenomenator();
		}
		void printfloat(){
			float result=(float)(getnumerator());
			cout<<"\nIn Floating points: "<<result/getdenomenator() ;
		}
};
int main(){
	int n,d;
	char choice;
	cout<<"Enter numerator and denomeantor for num1: ";
	cin>>n>>d;
	rational num1(n,d);
	cout<<"\n\nEnter numerator and denomeantor for num2: ";
	cin>>n>>d;
	rational num2(n,d);
	rational result;
	cout<<"\nEnter 'a' or 'A' for add || 's' or 'S' for subtract|| 'm' or 'M' for multiply || 'd' or 'D' for divide:\n";
	cin>>choice;
	choice=toupper(choice);
	switch (choice){
		case 'A':{
			result.add(num1, num2);
			break;
		}
		case 'S':{
			result.subtract(num1, num2);
			break;
		}
		case 'M':{
			result.multiply(num1, num2);
			break;
		}
		case 'D':{
			result.divide(num1 ,num2);
			break;
		}
		default:{
			cout<<"\nwrong choice";
			break;
		}
	}
	result.printfraction();
	result.printfloat();
}

