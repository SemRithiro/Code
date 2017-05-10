#include <iostream.h>
#include <fstream.h>
#include <conio.h>
/*
ifstream : Use to read data from file.
ofstream: Use to write data to file.
fstream: Use to read/write data.

**Opening files:
	1. Using constructors.
		-ifstream(char *filename, [int mode = ios::in]);
		-ofstream(char *filename, [int mode = ios::out]);
		-fstream(char *filename, int mode);
	2. Using Function member open.
		-void open(char *filename, [int mode = ios::in]);
		-void open(char *filename, [int mode = ios::out]);
		-void open(char *filename, int mode);

	Mode Meaning
		ios::in [open file to read data]
		ios::out [open file to write data]
		ios::app [open file to appending data]
		ios::ate [open file dynamically]
		ios::binary [open binary file]

	example1:
		berk text file (myfile.xxx) mouy nov knong current directory somrab write data jol.

	Method 1: Using Constructors
		ofstream out ("myfile.xxx"); || fstream out("myfile",ios::out);
	Method 2: Using Function Member Open.
		ofstream fout;
		fout.open("myfile.xxx");
		||
		fstream fout;
		fout.open("myfile.xxx",ios::out);

	example2:
		berk text file (myfile.xxx) mouy nov knong root directory ney drive C: somrab read data jenh.

	Method 1: Using Constructors
		ifstream fin ("C:\\myfile.xxx"); || fstream fin("C:\\myfile",ios::in);
	Method 2: Using Function Member Open.
		ifstream fin;
		fin.open("C:\\myfile.xxx");
		||
		fstream fin;
		fin.open("C:\\myfile.xxx",ios::in);

	example3:
		berk text file (myfile.xxx) mouy nov knong directory C:\\RUPP somrab read data jenh pg write data jol pg.
	Method 1: Using Constructors
		fstream finout("C:\\RUPP\\myfile.xxx",ios::in|ios::out);
	Method 2: Using Function Member Open.
		fstream finout;
		finout.open("C:\\RUPP\\myfile.xxx",ios::in|ios::out);

	example4:
		berk text file (myfile.xxx) mouy nov knong current directory somrab append data.

	Method 1: Using Constructors
		ifstream fin ("C:\\myfile.xxx",ios::app); || fstream fin("C:\\myfile",ios::app);
	Method 2: Using Function Member Open.
		ifstream fin;
		fin.open("C:\\myfile.xxx",ios::app);
		||
		fstream fin;
		fin.open("C:\\myfile.xxx",ios::app);
*/

class person{
protected:
	char name[80];
	short age;
public:
	void getData(){
		cin.seekg(0);
		cout<<"Enter name: ";	cin.get(name,80);
		cout<<"Enter age: ";	cin>>age;
	}
	void showData(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

/*void main(){
	person pers,pers1;
	pers.getData();
	fstream iofile;
	iofile.open("PERSON.TXT",ios::out|ios::in);
		iofile.write((char*)(&pers), sizeof(pers));
		iofile.read((char*)(&pers1), sizeof(pers1));
		pers1.showData();
	iofile.close();
}*/

void main(){
	person pers[20],pers1[20],pers2;
/*	for(int i=0;i<4;i++)
		pers[i].getData();
	ofstream outfile("PERSON.DAT",ios::binary | ios::app);
	outfile.write((char*)(&pers),4*sizeof(person));
	outfile.close();
	cout<<endl;*/

/*	ifstream infile("PERSON.DAT",ios::binary);
	infile.read((char*)(&pers1),4*sizeof(person));
	for(int i=0;i<4;i++)
		pers1[i].showData();
	infile.close();*/
/*	person *per,pers;
	int i=0;
	fstream iofile("PERSON.DAT");
	while(1){
		do{
		per[i].getData();
		iofile.write((char*)(&per),sizeof(person));
		i++;
		}while(getch()==13);
		iofile.read((char*)(&pers),sizeof(person));
		if(iofile.eof()) break;
		pers.showData();
	}
	iofile.close();*/

/*A:
	while(1){
		if(getch()==13){
			per.getData();
			iofile.write((char*)(&per),sizeof(person));
			clrscr();
		}
		else{
			while(1){
				iofile.read((char*)(&per),sizeof(person));
				if(iofile.eof()) break;
				per.showData();
			}
			iofile.close();
		}

	}
	goto A;*/

/*	ifstream infile("PERSON.DAT");
	while(1){
		infile.read((char*)(&pers2),sizeof(person));
		if(infile.eof()) break;
		pers2.showData();
	}*/

	ifstream infile("PERSON.DAT", ios::binary | ios::in | ios::ate );
	long n=infile.tellg()/sizeof(person);
	for(int i=n-1;i>=0;i--){
		infile.seekg((i)*sizeof(person),ios::beg); //ios::beg = begining of file
		infile.read((char*)(&pers2),sizeof(person));
		pers2.showData();
	}
	infile.close();
}
