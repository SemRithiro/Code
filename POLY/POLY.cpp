#include <iostream.h>
/*Polymophism is a groups of object that execute on method
that has the same name.
OOP has 3 part
1. Encapulation
2. Overloading
3. Polymophism*/
class B{
public:
	void Display(){cout<<"Are you going to learn C++?"<<endl;}
	/*virtual void Display(){cout<<"Are you going to learn C++?"<<endl;}
	Display using Polymophism
	Virtual Function is a kind of function that use as overwrite function*/
};

class D : public B{
public:
	void Display(){cout<<"I am also learning C++."<<endl;}
};

int main(){
	B b;  //b is an object of base class B
	D d;  //d is an object of derived class D
	B *ptr;  //pointer to class B
	ptr = &b; //pointer initialization of pointer of B
	ptr->Display();  //Function called by pointer
	ptr = &d;  //the pointer is assigned address of d
	ptr->Display();  //the pointer is used to call th
	return 0;
}

/*int main(){
	B b;
	D d;
	B *bptr = &(B)b;
	D *dptr = &(D)d;
	bptr -> Display();
	dptr -> Display();
}*/