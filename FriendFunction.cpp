#include <rithiro.h>
class person{
private:
	char name[20];
	int age;
public:
	friend void input(person &p){
		cin.seekg(0);
		cout<<"Input name: ";	cin.get(p.name,20);
		cout<<"Input age: ";	cin>>p.age;
	}
	friend void sort(person *p,int n){
		person tmp;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(strcmp(p[i].name,p[j].name)>0){
					tmp=p[i];
					p[i]=p[j];
					p[j]=tmp;
				}
	}
	friend void output(person &p){
		cout<<p.name<<"\t"<<p.age<<endl;
	}
	friend void search(person p[],int n){
		string tmp;
		int i=0;
		cout<<"\nSearch name: ";	cin>>tmp;
		for(i=0;i<n;i++)
			if(tmp == p[i].name)
				output(p[i]);
			else
				cout<<"\nNo Exist"<<endl;
	}
};
void main(){
	int n=getN();
	person *per = new person[n];
	for(int i=0;i<n;i++)
		input(per[i]);
	sort(per,n);
	for(int i=0;i<n;i++)
		output(per[i]);
	search(per,n);
}

/*#include <iostream.h>
class fri{
private:
	float x,y;
public:
	void input(){
		cout<<"Input X: ";	cin>>x;
		cout<<"Input Y: ";	cin>>y;
	}
	friend float sum(fri &f){
		return f.x+f.y;
	}
	friend void output(fri &f){
		cout<<"X: "<<f.x<<"\tY: "<<f.y<<"\nSum: "<<sum(f)<<endl;
	}
};
void main(){
	fri b;
	b.input();
	output(b);
}*/

/*#include <iostream.h>
class sample{
private:
	int x;
public:
	void getdata();
	friend void display(sample ob){
		cout<<"Enter number is "<<ob.x<<endl;
	}
};
void sample::getdata(){
	cout<<"Enter a value for x: ";
	cin>>x;
}
void main(){
	sample obj;
	obj.getdata();
	display(obj);
}*/

/*#include <iostream.h>
class Rect{
	friend int Area(Rect b){ return b.x*b.y; }
	int x,y;
public:
	Rect(int L,int W){
		x=L;
		y=W;
	}
};
void main(){
	Rect R1(5,6),R2(3,4);
	cout<<Area(R1)<<endl;
	cout<<Area(R2)<<endl;
}*/