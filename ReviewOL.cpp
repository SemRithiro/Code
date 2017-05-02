#include <rithiro.h>

class base{
public:
	virtual ostream &operator<<(ostream &out,base b){return 0;}
	virtual istream &operator>>(istream &in,base b){return 0;}
};

class derived1 : public base{
private:
	int num1,num2;
public:
	derived1(){num1=num2=0;}
	derived1(int x,int y){
		num1 = x;
		num2 = y;
	}
	ostream &operator<<(ostream &out, derived1 d1){
		cout<<"Number1: "<<d1.num1<<endl;
		cout<<"Number2: "<<d1.num2<<endl;
		return out;
	}
	istream &operator>>(istream &in, derived1 d1){
		cout<<"Number1: ";	cin>>d1.num1;
		cout<<"Number2: ";	cin>>d1.num2;
		return in;
	}
	derived1 operator+(derived1 d1){
		derived1 temp;
		temp.num1 = num1 + d1.num1;
		temp.num2 = num2 + d1.num2;
		return temp;
	}
};

class derived2 : public base{
private:
	int num3,num4;
public:
	derived2(){num3=num4=0;}
	derived2(int x,int y){
		num3 = x;
		num4 = y;
	}
	ostream &operator<<(ostream &out, derived2 d2){
		cout<<"Number3: "<<d2.num3<<endl;
		cout<<"Number4: "<<d2.num4<<endl;
		return out;
	}
	istream &operator>>(istream &in, derived2 d2){
		cout<<"Number3: ";	cin>>d2.num3;
		cout<<"Number4: ";	cin>>d2.num4;
		return in;
	}
	derived2 operator+(derived2 d2){
		derived2 temp;
		temp.num3 = num3 + d2.num3;
		temp.num4 = num4 + d2.num4;
		return temp;
	}
};

void main(){
	base *b[2];
	derived1 obj1;
	derived2 obj2;

	b[0] = & obj1;
	b[1] = & obj2;

	cout<<b[0];
}

/*class base{
	int width,height;
public:
	base(){width=height=0;}
	base(int width,int height){
		this->width=width;
		this->height=height;
	}
	base operator+(base b){
		base temp;
		temp.width = width + b.width;
		temp.height = height + b.height;
		return temp;
	}
	base operator-(base b){
		base temp;
		temp.width = width - b.width;
		temp.height = height - b.height;
		return temp;
	}
	base operator*(base b){
		base temp;
		temp.width = width * b.width;
		temp.height = height * b.height;
		return temp;
	}
	void display(){
		cout<<"Width: "<<width<<endl<<"Height: "<<height<<endl;
	}
};

void main(){
	base obj1(2,2),obj2(2,2),obj3,obj4;
	obj3 = obj1 * obj2;
	obj4 = obj1 - obj2;
	obj3.display();
	obj4.display();
}*/

/*class base{
private:
	int num1,num2;
public:
	friend ostream &operator<<(ostream &out,base &b){
		cout<<"Number 1: "<<b.num1<<endl;
		cout<<"Number 2: "<<b.num2<<endl;
		return out;
	}
	friend istream &operator>>(istream &in,base &b){
		cout<<"Number 1: ";	cin>>b.num1;
		cout<<"Number 2: ";	cin>>b.num2;
		return in;
	}
	float div(){
		return num2/num1;
	}
};
void main(){
	base obj1;
	cin>>obj1;
	cout<<obj1;
}*/