#include <iostream.h>
#include <conio.h>

class Devide{
public:
	Devide(){
		cout<<"Error: ";
	}
	char *getMessage(){
		return "Devide by zero";
	}
};
float quote(int a,int b){
	if(b==0)throw Devide();
		return (float)a/b;
}
void main(){
	int x,y,result;
	while(cin>>x>>y){
		try{
			result=quote(x,y);
			cout<<"result: "<<result;
		}
		catch(Devide &d){
			cout<<"Have error "<<d.getMessage();
		}
	}
}

/*void main(){
	double operand1,operand2,result;
	cout<<"This program allow you to perform a division of two numbers\n";
	cout<<"To process, enter two numbers: "<<endl;
	try{
		cout<<"First number: ";
		cin>>operand1;
		cout<<"Second number: ";
		cin>>operand2;
	if(operand2==0)
		throw "Division by zero not allowed";
	result = operand1/operand2;
	cout<<"\n"<<operand1<<"/"<<operand2<<"="<<result<<endl;
	}
	catch(char *str){
		cout<<"Error: "<<str;
	}
}*/

/*void main(){
	int studentAge;
	try{
		cout<<"student age: ";
		cin>>studentAge;
		if(studentAge<0)
			throw "Positive number require";
		cout<<"\nStudent age: "<<studentAge<<"\n\n";
	}
	catch(char *message){
		cout<<"Error: "<<message;
	}
}*/