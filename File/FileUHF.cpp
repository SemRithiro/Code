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
	long n = infile.tellg()/sizeof(Student);
	if(n==0)
		return;
	stu.heading();
	for(int i=0;i<n;i++){
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