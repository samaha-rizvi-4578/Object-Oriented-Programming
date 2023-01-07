#include<iostream>
#include<string>

using namespace std;
//class 1:
class human{
	private:
	string name;
	string email;
	float height;
	int age;
	public:
		human(){
			this->setname(name);
			this->setage(age);
			this->setemail(email);
			this->setheight(height);
		}
	void setname(string name){
		cout<<"Enter name: ";
		cin>>name;
		this->name=name;
	}
	string getname(){
		return name;
	}
	void setemail(string email){
		cout<<"Enter email address: ";
		cin>>email;
		this->email=email;
	}
	string getemail(){
		return email;
	}
	void setage(int age){
		cout<<"Enter age: ";
		cin>>age;
		this->age=age;
	}
	int getage(){
		return age;
	}
	float setheight(float height){
		cout<<"Enter height: ";
		cin>>height;
		this->height=height;
	}
	float getheight(){
		return height;
	}
	void canTeach(){
		cout<<"\nShe can teach!";
	}
	void canStudy(){
		cout<<"\nShe can study!";
	}
	void canAccessExam(){
		cout<<"\nShe can access exam!";
	}
	void printDetails(){
		cout<<"\n====Details====";
		cout<<"\n\nName: "<< getname();
		cout<<"\nAge: "<< getage();
		cout<<"\nEmail: "<<getemail();
		cout<<"\nheight: "<<getheight();
	}
	
};

//class 2:
class books{
	private:
	string name;
	string author;
	string publisher;
	string readers;
	int page;
	public:
		books(){
			this->setname(name);
			this->setauthor(author);
			this->setpublisher(publisher);
			this->setpage(page);
			this->interested(readers);
		}
	void setname(string name){
		cout<<"Enter name of book: ";
		cin>>name;
		this->name=name;
	}
	string getname(){
		return name;
	}
	void setauthor(string author){
		cout<<"Enter author of book: ";
		cin>>author;
		this->author=author;
	}
	string getauthor(){
		return author;
	}
	void setpage(int page){
		cout<<"Enter No. of pages: ";
		cin>>page;
		this->page=page;
	}
	int getpage(){
		return page;
	}
	void setpublisher(string publisher){
		cout<<"Enter publisher of book: ";
		cin>>publisher;
		this->publisher=publisher;
	}
	string getpublisher(){
		return publisher;
	}
	void motivational(){
		cout<<"\npurpose: motivational";
	}
	void coursebook(){
		cout<<"\npurpose: coursebook";
	}
	void interested(string readers){
		cout<<"enter interested group of readers: ";
		cin>>readers;
		this->readers=readers;
	}
	string getinterested(){
		return readers;
	}
	void printDetails(){
		cout<<"\n====Details====";
		cout<<"\n\nName: "<< getname();
		cout<<"\nAuthor: "<< getauthor();
		cout<<"\nPublisher: "<<getpublisher();
		cout<<"\nNo. of pages: "<<getpage();
		cout<<"\nInterested Readers: "<<getinterested();
	}
	
};
//class 3:

class person{
	private:
	string fname;
	string lname;
	string gender;
	string proffession;
	int age;
	public:
		person(){
			this->setfname(fname);
			this->setlname(lname);
			this->setgender(gender);
			this->setage(age);
			this->setproffession(proffession);
		}
	void setfname(string fname){
		cout<<"Enter first name: ";
		cin>>fname;
		this->fname=fname;
	}
	string getfname(){
		return fname;
	}
	void setlname(string lname){
		cout<<"Enter last name: ";
		cin>>lname;
		this->lname=lname;
	}
	string getlname(){
		return lname;
	}
	void setgender(string gender){
		cout<<"Enter gender: ";
		cin>>gender;
		this->gender=gender;
	}
	string getgender(){
		return gender;
	}
	void setage(int age){
		cout<<"Enter age: ";
		cin>>age;
		this->age=age;
	}
	int getage(){
		return age;
	}
	void setproffession(string proffession){
		cout<<"Enter proffession: ";
		cin>>proffession;
		this->proffession=proffession;
	}
	string getproffession(){
		return proffession;
	}
	void isalive(){
		cout<<"\nThis person is DEAD!";
	}
	void isdead(){
		cout<<"\nThis person is ALIVE!";
	}
	void printDetails(){
		cout<<"\n====Details====";
		cout<<"\n\nName: "<< getfname()<<" "<<getlname();
		cout<<"\nGender: "<< getgender();
		cout<<"\nAge: "<<getage();
		cout<<"\nproffession: "<<getproffession();
	}
	
};
//class 4:

class laptop{
	private:
	string model;
	int ram;
	float size;
	int proccessor;
	string purpose;
	public:
		laptop(){
			this->setmodel(model);
			this->setram(ram);
			this->setsize(size);
			this->setproccessor(proccessor);
			this->setpurpose(purpose);
		}
	void setmodel(string model){
		cout<<"Enter model: ";
		cin>>model;
		this->model=model;
	}
	string getmodel(){
		return model;
	}
	void setsize(float size){
		cout<<"Enter size: ";
		cin>>size;
		this->size=size;
	}
	float getsize(){
		return size;
	}
	void setram(int ram){
		cout<<"Enter ram: ";
		cin>>ram;
		this->ram=ram;
	}
	int getram(){
		return ram;
	}
	void setproccessor(int proccessor){
		cout<<"Enter proccessor: ";
		cin>>proccessor;
		this->proccessor=proccessor;
	}
	int getproccessor(){
		return proccessor;
	}
	void setpurpose(string purpose){
		cout<<"Enter purpose: ";
		cin>>purpose;
		this->purpose=purpose;
	}
	string getpurpose(){
		return purpose;
	}
	void poweron(){
		cout<<"\nStatus: Power on";
	}
	void shutdown(){
		cout<<"\nStatus: shutdown";
	}
	void printDetails(){
		cout<<"\n====Details====";
		cout<<"\n\nModel: "<< getmodel();
		cout<<"\nRam: "<<getram();
		cout<<"\nSize: "<< getsize();
		cout<<"\nProccessor: "<<getproccessor();
		cout<<"\npurpose: "<<getpurpose();
	}
	
};
//class 5:
class furniture{
	private:
	string material;
	string colour;
	float weight;
	float price;
	public:
		furniture(){
			this->setmaterial(material);
			this->setcolour(colour);
			this->setweight(weight);
			this->setprice(price);
		}
	void setmaterial(string material){
		cout<<"Enter material: ";
		cin>>material;
		this->material=material;
	}
	string getmaterial(){
		return material;
	}
	void setcolour(string colour){
		cout<<"Enter colour: ";
		cin>>colour;
		this->colour=colour;
	}
	string getcolour(){
		return colour;
	}
	float setweight(float weight){
		cout<<"Enter weight: ";
		cin>>weight;
		this->weight=weight;
	}
	float getweight(){
		return weight;
	}
	float setprice(float price){
		cout<<"Enter price: ";
		cin>>price;
		this->price=price;
	}
	float getprice(){
		return price;
	}
	void buy(){
		cout<<"\nbuying this!";
	}
	void sell(){
		cout<<"\nSelling this!";
	}
	void repair(){
		cout<<"\nRepairing this!";
	}
	void printDetails(){
		cout<<"\n====Details====";
		cout<<"\n\nmaterial: "<< getmaterial();
		cout<<"\ncolour: "<< getcolour();
		cout<<"\nweight: "<<getweight();
		cout<<"\nprice: "<<getprice();
	}
	
};
int main(){
	cout<<"CLASS 1:\n\n";
	//ob1 class 1:
	human student;
	student.canStudy();
	student.printDetails();
	cout<<endl<<endl;
	//ob2 class 1:
	human teacher;
	teacher.canTeach();
	teacher.canAccessExam();
	teacher.printDetails();
	cout<<"\n\nCLASS 2:\n\n";
	//ob1 class2;
	books book1;
	book1.printDetails();
	book1.motivational();
	cout<<endl<<endl;
	//ob2 class 2:
	books book2;
	book2.printDetails();
	book2.coursebook();
	cout<<"\n\nCLASS 3:\n\n";
	//ob1 class 3:
	person person1;
	person1.printDetails();
	person1.isalive();
	cout<<endl<<endl;
	//ob2 class 3:
	person person2;
	person2.printDetails();
	person2.isdead();
	cout<<"\n\nCLASS 4:\n\n";
	//ob1 class 4:
	laptop macbook;
	macbook.printDetails();
	macbook.poweron();
	cout<<endl<<endl;
	//ob2 class 4:
	laptop hp;
	hp.printDetails();
	hp.shutdown();
	cout<<"\n\nCLASS 5:\n\n";
	//ob1 class 5:
	furniture chair;
	chair.printDetails();
	chair.buy();
	cout<<endl<<endl;
	furniture table;
	table.printDetails();
	table.repair();
	table.sell();
}
