#include <rithiro.h>
class Person{
protected:
	int id;
	char name[20];
	char sex;
};
class Acadamic{
protected:
	char university[40];
	int year;
};
class student :	protected Person,
				protected Acadamic{
				private:
					float average;
				public:
					void input(){
						cout<<"ID: ";			cin>>id;	cin.seekg(0);
						cout<<"Name: ";			cin.get(name,20);
						cout<<"Sex: ";			cin>>sex;	cin.seekg(0);
						cout<<"University: ";	cin.get(university,40);
						cout<<"Year: ";			cin>>year;
						cout<<"Average: ";		cin>>average;
					}
					void output(){
						cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<university<<"\t\t"<<year<<"\t"<<average<<endl;
					}
				};
void main(){
	int n=getN();
	student *stu = new student[n];
	for(int i=0; i<n; i++)
		stu[i].input();
	for(int i=0; i<n; i++)
		stu[i].output();
}