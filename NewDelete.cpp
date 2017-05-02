#include <rithiro.h>
int i,j;
class MyClass {
public:
 	MyClass(){cout<<"Object"<<++i<<" constructed with default\n";}
 	MyClass(int x){cout<<"Object"<<++i<<" constructed with parameter\n";}
 	~MyClass(){cout<<"Object"<<++j<<" destroyed\n";}
};
void main () {
	int n=getN();
  	MyClass *pt = new MyClass[n];
  	delete[] pt;
}