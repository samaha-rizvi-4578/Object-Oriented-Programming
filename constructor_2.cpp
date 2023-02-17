/*Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An
Invoice should include four data members—a part number (type string), a part description (type string), a quantity of
the item being purchased (type int) and a price per item (type int). Your class should have a constructor that initializes
the four data members. Provide a set and a get function for each data member. In addition, provide a member
function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per
item), then returns the amount as an int value. If the quantity is not positive, it should be set to 0. If the price per item
is not positive, it should be set to 0. Write a test program that demonstrates class Invoice’s capabilities.*/
#include<iostream>
#include<string>
using namespace std;

class invoice{
	private:
		string pr_number,pr_desc;
		int qty, price,total;
	public:
	invoice(){
		this->setPr_no(pr_number);
		this->setPr_desc(pr_desc);
		this->setqty(qty);
		this->setprice(price);
	}
	void setPr_no(string pr_no){
		cout<<"Enter part number: ";
		cin>>pr_no;
		this->pr_number=pr_no;
	}	
	string getPr_no(){
		return pr_number;
	}
	
	void setPr_desc(string pr_desc){
		cout<<"Enter part description: ";
		cin>>pr_desc;
		this->pr_desc=pr_desc;
	}	
	string getPr_desc(){
		return pr_desc;
	}
	void setqty(int qty){
		cout<<"Enter quantity: ";
		cin>>qty;
		if(qty>0){
			this->qty=qty;
		}
		else{
			this->qty=0;
		}
	}
	int getqty(){
		return qty;
	}
	
	void setprice(int price){
		cout<<"Enter price per item: ";
		cin>>price;
		if(qty>0){
			this->price=price;
		}
		else{
			this->price=0;
		}
	}
	int getprice(){
		return price;
	}
	int getinvoiceamount(){
		this->total=getqty()* getprice();
		return total;
	}
};
int main(){
	invoice pr1;
	cout<<"your total invoice amount is: "<<pr1.getinvoiceamount();
}

