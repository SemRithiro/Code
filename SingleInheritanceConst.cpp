#include <iostream.h>
#include <conio.h>
class info{
protected:
	int id;
	char name[20];
};
class student : protected info{
protected:
	float kh,eng,math;
public:
	void input(){
		cout<<"ID: ";		cin>>id;
		cin.seekg(0);
		cout<<"Name: ";		cin.get(name,15);
		cout<<"Khmer:";		cin>>kh;
		cout<<"English: ";	cin>>eng;
		cout<<"Math: ";		cin>>math;
	}
	float average(){
		return ((kh+eng+math)/3);
	}
};
class sgrade : public student{
public:
	char grade(){
		if(average()>90)		return 'A';
		else if(average()>80)	return 'B';
		else if(average()>70)	return 'C';
		else if(average()>60)	return 'D';
		else if(average()>50)	return 'E';
		else					return 'F';
	}
	void output(){
		cout<<id<<"\t"<<name<<"\t"<<kh<<"\t"<<eng<<"\t"<<math<<"\t"<<average()<<"\t"<<grade()<<endl;
	}
};
void head(){
	cout<<"ID\tName\tKhmer\tEnglish\tMath\tAverage\tGrade"<<endl;
}

void main(){
	int n;
	cout<<"Enter n: ";	cin>>n;
	sgrade *s = new sgrade[n];
	for(int i=0; i<n; i++)
		s[i].input();
	head();
	for(int i=0; i<n; i++)
		s[i].output();
}