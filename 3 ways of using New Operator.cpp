#include <rithiro.h>
void main(){
    cout<<"\n\t3 Ways of using New Operator\n"<<endl;
    int *num = new int;
    cout<<"Number: ";   cin>>*num;
    cout<<"\nDynamic Create Variable: "<<*num<<endl;
    int *num1 = new int(102);
    cout<<"\nDynamic Initialize Variable: "<<*num1<<endl;
    int *num2 = new int[10];
    for(int i=0;i<9;i++)
        num2[i]=i+1;
    cout<<"\nDynamic Create Array"<<endl;
    for(int i=0;i<9;i++)
        cout<<i+1<<". "<<num2[i]<<endl;
}