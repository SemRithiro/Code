#include <rithiro.h>

class threeD{
	int x,y,z;
public:
	threeD(){x=y=z=0;}
	threeD(int i,int j,int k){
		x=i; y=j; z=k;
	}
	threeD operator+(threeD op2);
	threeD operator=(threeD op2);
	threeD operator-(threeD op2);
	void show();
};
threeD threeD::operator -(threeD op2){
	threeD tmp;
	tmp.x = x-op2.x;
	tmp.y = y-op2.y;
	tmp.z = z-op2.z;
	return tmp;
}
threeD threeD::operator =(threeD op2){
	x = op2.x;
	y = op2.y;
	z = op2.z;
	return *this;
}
threeD threeD::operator +(threeD op2){
	threeD tmp;
	tmp.x = x+op2.x;
	tmp.y = y+op2.y;
	tmp.z = z+op2.z;
	return tmp;
}
void threeD::show(){
	cout<<x<<","<<y<<","<<z<<endl;
}
void main(){
	threeD a(10,10,10);
	threeD b(4,8,7);
	threeD c,d,e;
	cout<<"Original value of a: ";
	a.show();
	cout<<"Original value of b: ";
	b.show();
	c=a-b;
	cout<<"Value of a-b: ";
	c.show();
	d=a+b;
	cout<<"Value of a+b: ";
	d.show();
	e=b;
	cout<<"Value of e=b: ";
	e.show();
}

/*class test{
private:
	int x;
public:
	test(int a=0):x(a){}
	test(test &t):x(t.x){}
	void in(){
		cout << "input x: "; cin >> x;
	}
	void out(){
		cout << "x: " << x << endl;
	}
	test operator +(test &t){
		return test(x + t.x);
	}
	test operator +(int a){
		return test(x + a);
	}
	friend test operator +(int a,test &t){
		return test(a + t.x);
	}
};

void main(){
	test a(10);
	test b(200);
	test c;
	a.out();
	b.out();
	c.out();

	c=a+b;
	a=a+20;
	b=15+b;
	a.out();
	b.out();
	c.out();
	c=a+b+55;	//the same as c=(a+b)+55
	a=12+b+c;	//the same as a=(12+b)+c
	b=a+50+c;	//the same as b=(a+50)+c
	a.out();
	b.out();
	c.out();
}*/

/*class Vector{
private:
	int x,y,z;
public:
	Vector(int a,int b,int c){x=a; y=b; z=c;}
	Vector(){};
	Vector operator+ (Vector v){
		x = x + v.x;
		y = y + v.y;
		z = z + v.z;
		return Vector(x,y,z);
	}
	void Display(){
		cout<<"X component: "<<x<<endl;
		cout<<"Y Component: "<<y<<endl;
		cout<<"Z Component: "<<z<<endl;
	}
};
void main(){
	Vector obj1(2,4,6);
	Vector obj2(3,5,8);
	Vector obj3;
	obj3 = obj1 + obj2;
	obj3.Display();
}*/