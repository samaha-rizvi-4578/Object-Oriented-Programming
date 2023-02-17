/*(Complex Class) Create a class called Complex for performing arithmetic with complex numbers.
Write a program to test your class. Complex numbers have the form
realPart + imaginaryPart * i

where i is vi
Use double variables to represent the private data of the class. Provide a constructor that enables an object of this
class to be initialized when it’s declared. The constructor should contain default values in case no initializers are
provided. Provide public member functions that perform the following tasks:
a) Adding two Complex numbers: The real parts are added together and the imaginary parts are added together.
b) Subtracting two Complex numbers: The real part of the right operand is subtracted from the real part of the left
operand, and the imaginary part of the right operand is subtracted from the imaginary part of the left operand.
c) Printing Complex numbers in the form (a, b), where a is the real part and b is the imaginary part.*/
#include<iostream>
using namespace std;

class complex{
	private:	
	double real;
	double imaginary;
	public:
		complex(double real=0, double imag=0){
			this->setreal(real);
			this->setimaginary(imag);
		}
		void setreal(double real){
			this->real=real;
		}
		void setimaginary(double imaginary){
			this->imaginary=imaginary;
		}
		double getreal(){
			return real;
		}
		double getimaginary(){
			return imaginary;
		}
		void add(complex o1, complex o2){
			this->real=o1.getreal()+o2.getreal();
			this->imaginary=o1.getimaginary()+ o2.getimaginary();	
		}
		void subtract(complex o1, complex o2){
			this->real=o1.getreal()-o2.getreal();
			this->imaginary=o1.getimaginary()- o2.getimaginary();
		}
		void print(){
			cout<<"\nRESULT:";
			cout<<"\n(a, b) = ("<<getreal()<<" , "<<getimaginary()<<") ";
		}
		
};
int main(){
	double real, imag;
	char choice;
	cout<<"Enter real and imaginary part of number 1:";
	cin>>real>>imag;
	complex num1(real, imag);
	
	cout<<"Enter real and imaginary part of number 2:";
	cin>>real>>imag;
	complex num2(real, imag);
	
	complex result;
	cout<<"\nEnter 'a' or 'A' for addition and 's' or 'S' for subtraction:";
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
		default:{
			cout<<"\nwrong choice";
			break;
		}
	}
	result.print();
	return 0;
}

