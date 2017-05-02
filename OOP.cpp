#include <iostream.h>
#include <string.h>
#include <conio.h>

//Class is all about object(OOP: Object Oriented Program)
class Sample{
	protected:
		int id,age;
		char name[20];
	public:
		//Constructor define first value to object
		/*Default Constructor:
		Define value by default when object was created*/
		Sample(){
			id = 1;
			strcpy(name,"Unknown");
			age = 20;
		}
		/*Parameter Constructor:
		Define value using paramte*/
		Sample(int id, char *name, int age){
			this->id = id;
			strcpy(this->name,name);
			this->age = age;
		}
		/*Copy Constructor:
		Define value by copying from anothe object*/
/*		Sample(Sample &object){
			id = object.id;
			name = object.name;
			age = object.age;
		}*/
		~Sample(){
			cout<<"Object: "<<id<<" Was deleted"<<endl;
		}
};
//Class inheritance
class info:public Sample{
	public:
		void input(){
			cout<<"ID: ";	cin>>id; cin.seekg(0);
			cout<<"Name: ";	cin.get(name,20);
			cout<<"Age: ";	cin>>age;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<age<<endl;
		}
		char *getname(){
			return name;
		}
		static void header(){
			cout<<"ID\tName\tAge"<<endl;
		}
};

void sort(info object[], int n){
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(strcmp(object[i].getname(),object[j].getname())>0){
				info tmp = object[i];
				object[i] = object[j];
				object[j] = tmp;
			}
}

void main(){
	info *obj;
	int n;
	cout<<"Input n: "; cin>>n;
	obj = new info[n];
	for(int i=0;i<n;i++)
		obj[i].input();
	clrscr();
	info::header();
	for(int i=0;i<n;i++)
		obj[i].output();
	sort(obj,n);
	cout<<"\nObject after sorting"<<endl;
	info::header();
	for(int i=0;i<n;i++)
		obj[i].output();
}