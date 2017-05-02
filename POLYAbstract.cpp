#include <rithiro.h>
/*
class that has per virtual function called abstract class
per virtual function are class that has virtual as prefix, no definition, 
has value equal zero(0), and can't create object from abstract class.
Normally abstract class act as base class
*/
class base{
private:
	int x;
	float y;
public:
	virtual void getdata()=0;
	virtual void display()=0;
};

class derived1 : public base{
private:
	int id;
	char name[20];
public:
	void getdata();
	void display();
};

class derived2 : public base{
private:
	float height, weight;
public:
	void getdata();
	void display();
};

void derived1::getdata(){
	cout<<"Enter id of student: "; cin>>id;
	cin.seekg(0);
	cout<<"Enter name of student: "; cin.get(name,20);
}
void derived1::display(){
	cout<<"ID: "<<id<<"\nName: "<<name<<endl;
}
void derived2::getdata(){
	cout<<"Enter height: "; cin>>height;
	cout<<"Enter weight: "; cin>>weight;
}
void derived2::display(){
	cout<<"Height: "<<height<<"\nWeight: "<<weight<<endl;
}
//First method
/*void main(){
	base *ptr[2];
	derived1 obj1;
	derived2 obj2;

	ptr[0] = &obj1;
	ptr[1] = &obj2;
	for(int i=0;i<2;i++)
		ptr[i]->getdata();
	for(int i=0;i<2;i++)
		ptr[i]->display();
}*/

//Second method
void main(){
	base *ptr[10];
	derived1 obj1[10];
	derived2 obj2[10];
	int n=getN("Enter student: ");
	for(int i=0;i<n;i++){
		ptr[0] = &obj1[i];
		ptr[1] = &obj2[i];
		for(int j=0;j<2;j++)
			ptr[j]->getdata();
	}
	for(int i=0;i<n;i++){
		ptr[0] = &obj1[i];
		ptr[1] = &obj2[i];
		for(int j=0;j<2;j++)
			ptr[j]->display();
	}
}