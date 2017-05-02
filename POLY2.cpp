#include <iostream.h>
class First{
	protected:	float x;
	public:
		First(float a=0):x(a){}
		void output(){cout<<"x= "<<x<<endl;}
		float sum(){return x+x;}
		float doubleSum(){return 2*sum();}
};

class Second: public First{
	private:	float y;
	public:
		Second(float a=0,float b=0):First(a),y(b){}
		void output(){
			First::output();
			cout<<"y= "<<y<<endl;
		}
		float sum(){return y+y+y;}
};

void main(){
	Second obj(3.0,4.0);
	cout<<"Sum= "<<obj.sum()<<endl;
	cout<<"Double Sum= "<<obj.doubleSum()<<endl;
	obj.output();

	First *p=new Second(5,6);
	cout<<"Sum= "<<(*p).sum()<<endl;
	cout<<"Double Sum= "<<p->doubleSum()<<endl;
	p->output();
}
