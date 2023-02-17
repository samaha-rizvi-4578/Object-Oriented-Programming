/*A book shop maintains the inventory of books that are being sold at the shop. The list includes details such
as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person
inputs the title and author and the system searches the list and displays whether it is available or not. If it is
not, an appropriate message is displayed. If it is, then the system displays the book details and requests for
the number of copies required. If the requested copies are available, the total cost of the requested copies
is displayed; otherwise “Required copies not in stock” is displayed.
Design a system using a class called books with suitable member functions and constructors.*/
#include <iostream>
#include <string>
using namespace std;
class books{
private:
    string author,title, publisher;
    int price,stock_position;

public:
    books(const string title,const string author,const string publisher, int stock_pos,const int price){
        this->settitle(title);
        this->setauthor(author);
        this->setpublisher(publisher);
        this->setstock(stock_pos);
        this->setprice(price);
    }
    void settitle(string title){
    	this->title=title;
	}
	void setauthor(string author){
    	this->author=author;
	}
	void setpublisher(string publisher){
    	this->publisher=publisher;
	}
	void setprice(int price){
    	this->price=price;
	}
	void setstock(int stock_position){
    	this->stock_position=stock_position;
	}
    string gettitle(){
        return title;
    }
    int getprice(){
        return price;
    }
    int getstockposition(){
        return stock_position;
    }
    string getauthor(){
        return author;
    }
    string getpublisher(){
        return publisher;
    }
    void printDetails(){
    	cout<<"\nDETAILS OF BOOK:\n";
    	cout<<"TITLE: "<<gettitle();
    	cout<<"\nAUTHOR: "<<getauthor();
    	cout<<"\nPUBLISHER: "<<getpublisher();
    	cout<<"\nPRICE: "<<getprice();
	}
};
int main(){
    string title, author;
    int stock, bill, flag,i;
    books obj[3] = {//title, author, publisher, stock , price
	{"The 80/20 Principle","Richard Koch", "Crown Business", 50, 500},
	 {"How to Pray a Good Prayer","Ali reza Panahian","Bayaan Ma'anawi", 12, 230}, 
    {"75 People Who Changed The World","IRA RIFKIN","Jaico Publishing House", 15, 650}
	};
	cout<<"***BOOK INVENTORY***";
    cout <<"\nTitle of book you want:";
    getline(cin,title);
    cout << "Author of the searched book:";
    getline(cin,author);
    for (i = 0; i < 3; i++){
        if ((obj[i].gettitle() == title) && (obj[i].getauthor() == author)){
        	obj[i].printDetails();
            cout <<"\n\nEnter Number of copies you want: ";
            cin >> stock;
            flag=1;
            if (obj[i].getstockposition() >= stock){
                bill = obj[i].getprice() * stock;
                cout<< "\nTotal bill: " << bill;
            }
            else{
               cout << "\nRequired copies not in stock ";
            }
        }
    }
    if (flag!=1){
        cout<< "\nSorry! your searched book is not present.";
    }
    return 0;
}

