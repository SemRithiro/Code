#include <iostream.h>
#include <conio.h>
#include <rithiro.h>
class Employee{
	char name[20],sex[7];
	float salary,tax;
public:
	void input(){
		cin.seekg(0);
		cout<<"Name: ";		cin.get(name,20);	cin.seekg(0);
		cout<<"Sex: ";		cin.get(sex,7);		cin.seekg(0);
		cout<<"Salary: ";	cin>>salary;
		cout<<"Tax: ";		cin>>tax;
	}
	static float SalaryTax(Employee emp){
		return (emp.salary-(emp.salary*emp.tax));
	}
	static void head(){
		cout<<"Name\tSex\tSalary\tGrandTotal"<<endl;
	}
	void output(){

		cout<<name<<"\t"<<sex<<"\t"<<salary<<"\t";
	}
};
void main(){
	int n=getN();
	Employee *emp = new Employee[n];
	for(int i=0;i<n;i++)
		emp[i].input();
	Employee::head();
	for(int i=0;i<n;i++){
		emp[i].output();
		cout<<Employee::SalaryTax(emp[i])<<endl;
	}
}