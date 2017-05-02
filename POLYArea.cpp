#include <iostream.h>
class Base{
public:
	float high,length;
public:
	Base(){
		high = 4.5;
		length = 6.5;
	}
	virtual float area(){return 0;}
};

class Triangle : public Base{
public:
	float area(){return (high*length)/2;}
};

class Square: public Base{
public:
	float area(){return high*high;}
};

class Rechtangle : public Base{
public:
	float area(){return high*length;}
};

void main(){
	Base *p[3];
	Triangle obj1;
	Square obj2;
	Rechtangle obj3;
	
	p[0] = &obj1;
	p[1] = &obj2;
	p[2] = &obj3;

	for(int i=0;i<3;i++)
		cout<<p[i]->area()<<endl;
}