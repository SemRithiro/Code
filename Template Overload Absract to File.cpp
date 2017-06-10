#include <iostream.h>
#include <string.h>
#include <fstream.h>

template <class t>
class Base{
private:
	t name, age, gender;
public:
	virtual t CalAge()=0;
};

template <class t>
class Employee: public Base <t>{
private:
	t name, age, gender;
public:
	Employee(){name="Rithiro", age = 20, gender = "Male"};
	t CalAge(){
		return age/3;
	}
	friend ostream &operator<<(ostream & out, Employee & emp);
	friend istream &operator>>(istream & in, Employee & emp);
};
ostream & operator<< (ostream & out, <t> Employee & emp){
	out<<"Name = "<<emp.name<<endl;
	out<<"Age = "<<emp.age<<endl;
	out<<"Gender = "<<emp.gender<<endl;
	out<<"Cal Age = "<<emp.CalAge();
	return out;
}
istream & operator>> (istream & in, <t> Employee & emp){
	cout<<"Name = ";	in>>emp.name;
	cout<<"Age = ";	in>>emp.age;
	cout<<"Gender = ";	in>>emp.gender;
	return in;
}

template <class t>
class Student: public Base <t>{
private:
	t name, age, gender;
public:
	Student(){name="Rithiro", age = 20, gender = "Male"};
	t CalAge(){
		return age/3;
	}
	friend ostream &operator<<(ostream & out, Student & stu);
	friend istream &operator>>(istream & in, Student & stu);
};
ostream & operator<< (ostream & out, <t> Student & stu){
	out<<"Name = "<<stu.name<<endl;
	out<<"Age = "<<stu.age<<endl;
	out<<"Gender = "<<stu.gender<<endl;
	out<<"Cal Age = "<<stu.CalAge();
	return out;
}
istream & operator>> (istream & in, <t> Student & stu){
	cout<<"Name = ";	in>>stu.name;
	cout<<"Age = ";	in>>stu.age;
	cout<<"Gender = ";	in>>stu.gender;
	return in;
}

void main(){
	Base *ptr[2];
	Employee obj1[20];
	Student obj2[20];

	int n;
	cout<<"Please input N: "; cin>>n;
	for(int i=0;i<n;i++){
		cin>>obj1[i];
		cin>>obj2[i];
	}
	for(int i=0;i<n;i++){
		cout<<obj1[i];
		bout<<obj2[i];
	}
}