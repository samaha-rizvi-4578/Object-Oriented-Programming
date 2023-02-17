/*A vehicle company is deciding to hire a programmer to develop a system that will allow the company to enter the details
of the vehicles sold by them. As a programmer, you need to implement a program that contains a base class called
Vehicles that contains a data member to store the price of the vehicles. Derive two other classes named as Car and
Motorcycle.
- The Car class will contain data members to store details that include seating capacity, number of doors and fuel
type (diesel or petrol).
- The Motorcycle class will contain data members to store details such as the number of cylinders, the number of
gears and the number of wheels.
Derive another subclass named as Audi of Car and Yamaha of Motorcycle.
- The Audi class will contain a data member to store the model type.
- The Yamaha class will contain a data member to store the make – type.
Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model type) and the details of the
Yamaha motorcycle (price, number of cylinders, number of gears, number of wheels, make – type).*/
#include<iostream>
#include<string>
using namespace std;
class vehicle{
	private:
		int price;
	public:
		vehicle(){
		this->setprice();	
		}
		void setprice(){
			while(1){
				cout<<"Enter price of the vehicle: ";
			cin>>price;
			if(price >0){
				this->price=price;
				break;
			}
			cout<<"\nPrice must be greater than 0. ENTER AGAIN!!\n";	
			}	
		}
		int getprice(){
			return price;
		}
		void printvehicle(){
			cout<<"\nPrice: "<<getprice();
		}
};
class car:public vehicle{
	private:
		int seat_capacity;
		int no_of_doors;
		string feul_type;
	public:
		car(){
			this->setseatcapacity();
			this->setnofdoors();
			this->setfeultype();
		}
	void setseatcapacity(){
			while(1){
				cout<<"Enter seating caapcity of car: ";
			cin>>seat_capacity;
			if(seat_capacity> 0){
				this->seat_capacity=seat_capacity;
				break;
			}
			cout<<"\nSeating capacity must be greater than 0. ENTER AGAIN!!\n";		
		}
	}	
	int getseatcapacity(){
		return seat_capacity;
	}
	void setnofdoors(){
			while(1){
			cout<<"Enter no of doors of car: ";
			cin>>no_of_doors;
			if(no_of_doors> 0){
				this->no_of_doors=no_of_doors;
				break;
			}
			cout<<"\nNumber of Doors must be greater than 0. ENTER AGAIN!!\n";		
		}
	}	
	int getnofdoors(){
		return no_of_doors;
	}
	void setfeultype(){
		while(1){
			cout<<"Enter feul type of car: ";
			cin>>feul_type;
			if(feul_type=="diesel" || feul_type=="petrol"){
					this->feul_type=feul_type;
				break;
			}
			cout<<"\nfeul type must be either 'diesel' or 'petrol'. ENTER AGAIN!!\n";		
		}
	}	
	string getfeultype(){
		return feul_type;
	}
	void printcar(){
			cout<<"\nSeat capacity: "<<getseatcapacity();
			cout<<"\nNo of doors: "<<getnofdoors();
			cout<<"\nFeul type: "<<getfeultype();
			vehicle::printvehicle();
		}	
};
class motorcycle: public vehicle{
	private:
		int no_of_cylinders;
		int no_of_gears;
		int no_of_wheels;
	public:
		motorcycle(){
			this->setcylinders();
			this->setnofgears();
			this->setwheels();
		}	
	void setcylinders(){
		while(1){
			cout<<"Enter no of cylinders: ";
			cin>>no_of_cylinders;
			if(no_of_cylinders>0){
					this->no_of_cylinders=no_of_cylinders;
				break;
			}
			cout<<"\nNumber of cylinders must be greater than 0. ENTER AGAIN!!\n";		
		}
	}	
	int getcylinders(){
		return no_of_cylinders;
	}
	void setnofgears(){
		while(1){
			cout<<"Enter no of gears: ";
			cin>>no_of_gears;
			if(no_of_gears>0){
					this->no_of_gears=no_of_gears;
				break;
			}
			cout<<"\nNumber of gears must be greater than 0. ENTER AGAIN!!\n";		
		}
	}	
	int getnofgears(){
		return no_of_gears;
	}
	void setwheels(){
		while(1){
			cout<<"Enter no of wheels: ";
			cin>>no_of_wheels;
			if(no_of_wheels>0){
					this->no_of_wheels=no_of_wheels;
				break;
			}	
			cout<<"\nno of wheels must be greater than 0. ENTER AGAIN!!\n";	
		}
	}	
	int getwheels(){
		return no_of_wheels;
	}
	void printmotorcycle(){
			cout<<"\nNo of cylinders: "<<getcylinders();
			cout<<"\nNo of gears: "<<getnofgears();
			cout<<"\nNo of wheels: "<<getwheels();
			vehicle::printvehicle();
		}
};
class audi: public car{
	private:
		string model;
	public:
		audi(string model){
			this->setmodel(model);
		}
		void setmodel(string model){
			this->model=model;
		}	
		string getmodel(){
			return model;
		}
		void printaudi(){
			cout<<"\n\nDetails\n";
			cout<<"Model type:"<<getmodel();
			car::printcar();
		}
};
class yamaha: public motorcycle{
	private:
		string make_type;
	public:
		yamaha(string make){
			this->setmaketype(make);
		}
		void setmaketype(string maketype){
			this->make_type=maketype;
		}	
		string getmaketype(){
			return make_type;
		}
		void printyamaha(){
			cout<<"\n\nDetails\n";
			cout<<"Make type:"<<getmaketype();
			motorcycle::printmotorcycle();
		}
};
int main(){
	string model, make;
	cout<<"--------WELCOME--------\n\n";
	cout<<"Enter the model type of audi: ";
	cin>>model;
	audi car1(model);//class audi
	car1.printaudi();//print details of audi
	cout<<endl<<endl;
	cout<<"Enter the make type of yamaha: ";
	cin>>make;
	yamaha bike1(make);//class yamaha
	bike1.printyamaha();//print details 0f yamaha
	return 0;
}

