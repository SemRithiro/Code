#include <student.h>
//Written into file
/*void main(){
	int n=getN("Please input n: ");
	Student *stu = new Student[n];
	for(int i=0;i<n;i++){
		stu[i].input();
		clrscr();
	}
	ofstream fout("STU.obj",ios::binary);
	if(fout.fail()){
		cout<<"Can not open file";
		return;
	}
	for(int i=0;i<n;i++)
		fout.write((char*)&stu[i],sizeof(Student));
	fout.close();
	cout<<n<<" Students were written to file STU.obj\n";
}*/

//Written into file randomly
/*void main(){
	int n=getN("Please input n: ");
	Student *stu = new Student[n];
	for(int i=0;i<n;i++){
		stu[i].input();
		clrscr();
	}
	fstream iofile("STU.obj",ios::binary|ios::in|ios::out);
	if(iofile.fail()){
		cout<<"can not open file\n";
		return;
	}
	//seekp is a fucntion which point to any index to write file
	iofile.seekp((2-1)*sizeof(Student),ios::beg);
	iofile.write((char*)&stu[0],sizeof(Student));
	iofile.seekp(0);
	iofile.write((char*)&stu[1],sizeof(Student));
	iofile.close();
}*/

//Read from file
void main(){
	Student stu;
	ifstream infile("STU.obj",ios::binary|ios::in|ios::ate);
	//tellg is a function which tell how many bit in a file
	long n = infile.tellg()/sizeof(Student);
	if(n==0)
		return;
	stu.heading();
	for(int i=0;i<n;i++){
		//seekg is a function which search for any index in file
		infile.seekg((i)*sizeof(Student),ios::beg);
		infile.read((char*)&stu,sizeof(Student));
		stu.output();
	}
	infile.close();
	cout<<'\n'<<n<<" Students were read from file STU.obj\n";
}

/*void main(){
	Student stu;
	ifstream intfile("STU.obj",ios::binary|ios::in|ios::ate);
	while(1){
		infile.read((char*)&stu,sizeof(Student));
		if(infile.eof()) break;
		stu.output();
	}
	infile.close();
}*/

/*Note:
	in order to write into file you can write one by one or using array to write.
	reading data from a file you can read by using seekg() or seekp().

	seekp() can be use to read or write data one by one or using array the same as seekg(),
	but in writing data you must use array with seekg() or seekp(). Class obj must be a single
	obj not array obj.
*/

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
