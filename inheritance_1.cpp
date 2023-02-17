/*A school library wants to organize its library system by categorizing books according to their genre. They need an automated
system that will allow them to input the details of the books that are in their library. To do this, you need to implement a
program that contains a base class called Books that will contain a data member to store the genre of the book. Derive two
other classes from the base class and name them accordingly. Each of these two classes will hold details about a book from
a specific genre of your choice such as Novel, Narrative, Mystery and so on. The derived class will contain data members to
store the title and the author of the book. Display the details of each book along with their genre.*/
#include<iostream>
#include<string>
using namespace std;

class book{
	private:
		string genre;
	public:
		book(){
		}	
		book(string genere): genre(genere){
		}
		
		void setgenre(string genre){
			this->genre=genre;
		}
		string getgenre(){
			return genre;	
		}
		void print()
		{
			cout<<"Genre: "<<getgenre();
		}
		
};
class novel: public book
{
	private:
		string title;
		string author;
	//	int stock;
	public:	
	novel(){}
	novel(string title, string author,string genre):book(genre){
		this->settitle(title);
		this->setauthor(author);
	//	setgenre("novel");

	}
	void settitle(string title){
		this->title=title;
	}
	string gettitle(){
		return title;
	}
	void setauthor(string author){
		this->author=author;
	}
	string getauthor(){
		return author;
	}
	void printdetails(){
		cout<<"\nDETAILS:\n";
		cout<<"\nTitle: "<<gettitle();
		cout<<"\nAuthor: "<<getauthor()<<endl;
        book::print();
	}
};
class biography: public book
{
	private:
		string title;
		string author;
	//	int stock;
	public:	
	biography(string title, string author, string genre):book(genre){
		this->settitle(title);
		this->setauthor(author);
		//setgenre("biography");
	}
	void settitle(string title){
		this->title=title;
	}
	string gettitle(){
		return title;
	}
	void setauthor(string author){
		this->author=author;
	}
	string getauthor(){
		return author;
	}
	void printdetails(){
		cout<<"\nDETAILS:\n";
		cout<<"\nTitle: "<<gettitle();
		cout<<"\nAuthor: "<<getauthor()<<endl;
		book::print();
	}
	
};
int main(){
	novel book1("The Alchemist", "Paulo Coelho","novel");
	book1.printdetails();
	cout<<endl;
	biography book2("A promised land", "Barrack Obama", "biography");
	book2.printdetails();
	return 0;
}

