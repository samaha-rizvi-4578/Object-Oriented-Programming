/*Hooray, CatBook is starting to attract users! It's time to take this opportunity to improve your code. The CuteCatPicture
and GrumpyCatPicture subclasses do very similar things: you can move some of this common code into the CatPicture
base class.
Add a constructor to the CatPicture base class which takes a std::string and stores it in a field named cat_name. Add a
member function get_cat_name() which only derived classes may call.
Refactor your CuteCatPicture and GrumpyCatPicture subclasses to call the new base class constructor. Use the new
get_cat_name() function in each implementation of get_description().
Everybody likes cat pictures. Add a new member function like() which, when called, increments the like_count of a
picture. Add a member function get_num_likes() which returns a picture's current like_count.*/
#include<iostream>
#include<string>
using namespace std;

class CatPicture{
	private:
		string cat_name;
	public:
		CatPicture(){
		}
		CatPicture(string name):cat_name(name){
		}
		void setcatname(string name){
			this->cat_name=name;
		}	
	protected:
		string getcatname(){
			return cat_name;
		}	
};
class CuteCatPicture:public CatPicture{
	private:
		int like_count;
	public:
		CuteCatPicture(string name):CatPicture(name){
			this->like_count=0;
		}
		void like(){
			like_count++;
		}
		int get_num_like(){
			return like_count;
		}
		void get_description(){
			cout<<"\nDescription:\n";
			cout<<"Cat name: "<<CatPicture::getcatname();
			cout<<"\nLikes: "<<get_num_like();
		}
};
class GrumpyCatPicture:public CatPicture{
	private:
		int like_count;
	public:
		GrumpyCatPicture(string name):CatPicture(name){
			this->like_count=0;
		}
		void like(){
			like_count++;
		}
		int get_num_like(){
			return like_count;
		}
		void get_description(){
			cout<<"\nDescription:\n";
			cout<<"Cat name: "<<CatPicture::getcatname();
			cout<<"\nLikes: "<<get_num_like();
		}
};

int main(){
	string name;
	cout<<"Enter the name of cute cat: ";
	getline(cin, name);
	CuteCatPicture cat1(name);
	cat1.like();
	cat1.get_description();
	
	cout<<"\n\nEnter the name of grumpy cat: ";
	getline(cin, name);
	GrumpyCatPicture cat2(name);
	cat2.like();
	cat2.like();
	cat2.like();
	cat2.like();
	cat2.get_description();
}


