#include <rithiro.h>
class Employer{
    int id;
    char name[20],sex;
    float work,total;
public:
    Employer(){
        id=1;
        strcpy(name,"Unknown");
        sex='M';
        work=0;
        total=0;
    }
    void input(){
        cout<<"ID: ";   cin>>id;    cin.seekg(0);
        cout<<"Name: "; cin.get(name,20);
        cout<<"Sex: ";  cin>>sex;
        cout<<"Worked: ";   cin>>work;
    }
    static float rate(){
        return 7.3;
    }
    float hour(){
        return work*Employer::rate();
    }
    static void header(){
        cout<<"ID\tName\tSex\tWorked\tSalary"<<endl;
    }
    friend void output(Employer &emp){
        cout<<emp.id<<"\t"<<emp.name<<"\t"<<emp.sex<<"\t"<<emp.work<<"\t"<<emp.hour()<<endl;
    }
};
void main(){
    int n;
    cout<<"N: ";    cin>>n;
    Employer *emp = new Employer[n];
    for(int i=0;i<n;i++)
        emp[i].input();
    Employer::header();
    for(int i=0;i<n;i++)
        output(emp[i]);
}