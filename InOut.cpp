#include <rithiro.h>
/*
class Book{
	char title[20];
	float price;
public:
	Book(){strcpy(title," ");price=0.0;}
	Book(char *t,float p){
		strcpy(title,t);
		price=p;
	}
	void input();
	void output();
	int operator == (float);
	int operator >> (Book &);
	friend int operator <= (Book &b, float);
};

int Book::operator >> (Book &b){
	return (strcmp(title,b.title)>0);
}
int operator == (Book &b,float m){
	return (b.price <= m);
}
void Book::output(){
	cout<<title<<"\t"<<price<<endl;
}
void Book::input(){
	cout<<"Title: ";	cin.seekg(0);	cin.get(title,20);
	cout<<"Price: ";	cin>>price;
}
void search(Book b[],int n,float p){
	int k=0;
	for(int i=0;i<n;i++)
		if(b[i]==p){
			k++;
			b[i].output();
		}
	if(k==0)
		cout<<"Search not found"<<endl;
}
void show(Book b[],int n,float m){
	for(int i=0;i<n;i++)
		if(b[i]<=m)
			b[i].output();
}

void main(){
	int n,i;
	Book b[20];
	cout<<"Input number of book: "; cin>>n;
	cout<<"Input data of books: "<<endl;
	for(i=0;i<n;i++){
		cout<<"Book: "<<(i+1)<<":";
		b[i].input();
	}
	for(i=0;i<n;i++)
		b[i].output();
	search(b,n,24.4);
	show(b,n,90.0);
}*/

class employee{
private:
	int id,age;
	char name[20];
	float rate,hour;
public:
	employee(){
		id=0;
		strcpy(name,"Rithiro");
		age=20;
		rate=0.0;
		hour=0.0;
	}
	float income();
	employee(int i,char *n,int a,float r,float h);
	friend ostream &operator<<(ostream &out,employee &emp);
	friend istream &operator>>(istream &in,employee &emp);
};
employee::employee(int i,char *n,int a,float r,float h){
	id=i;
	strcpy(name,n);
	age=a;
	rate=r;
	hour=h;
}
ostream &operator<<(ostream &out,employee &emp){
	out << "ID: " << emp.id << endl;
	out << "Name: " << emp.name << endl;
	out << "Age: " << emp.age << endl;
	out << "Rate: " << emp.rate << endl;
	out << "Hours: " << emp.hour << endl;
	out << "Income: " << emp.income() << endl;
	return out;
}
istream &operator>>(istream &in,employee &emp){
	cout << "input ID: "; 
	in >> emp.id;
	in.clear();
	in.seekg(0,ios::end);
	cout << "input Name: ";
	in.get(emp.name,20);
	cout << "input Age: ";
	in >> emp.age;
	cout << "input Rate: ";
	in >> emp.rate;
	cout << "input hours: ";
	in >> emp.hour;
	return in;
}
float employee::income(){
	return (rate*hour);
}
void main(){
	clrscr();
	employee e[20];
	int n;
	cout << "input n: ";
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> e[i];
	for(int i=0;i<n;i++)
		cout << e[i];
}