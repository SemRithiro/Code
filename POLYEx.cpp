#include <iostream.h>
class id{
public:
	int id;
	char name[20];
	float age;
public:
	virtual void input(){
		cout<<"ID: "; cin>>id;
	}
	virtual void output(){
		cout<<id<<'\t';
	}
};

class name : public id{
public:
	void input(){
		cout<<"Name: ";	cin.seekg(0);
		cin.get(name,20);
	}
	void output(){
		cout<<name<<'\t';
	}
};

class age : public name{
public:
	void input(){
		cout<<"Age: "; cin>>age;
	}
	void output(){
		cout<<age<<'\t';
	}
};

void main(){
	id *p[3];
	id iid;
	name iname;
	age iage;
	p[0]=&iid;
	p[1]=&iname;
	p[2]=&iage;
	for(int i=0;i<3;i++)
		p[i]->input();
	for(int i=0;i<3;i++)
		p[i]->output();
}
