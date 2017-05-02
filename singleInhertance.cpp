#include <iostream.h>
class B{
	protected:
		int m;
};

class D : protected B{
	public:
		int a;
		int Setvalue(){return m=a;}
};

class D1 : public D{
	public:
		int b;
		int setvalue1(){return m=b;}
};

void main(){
	D C;
	D1 C1;
	C.a=5;
	C1.b=7;
	cout<<"Class D: "<<C.Setvalue()<<endl<<"Class D1: "<<C1.setvalue1()<<endl;
	cout<<"\nSum: "<<C.Setvalue()+C1.setvalue1()<<endl;
}