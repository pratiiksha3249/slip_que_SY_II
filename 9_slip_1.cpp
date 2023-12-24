#include<iostream>
using namespace std;
class member{
public:
 char name[20],add[20];
 float sal,tax;

 void accept(){
    cout<<"enter member name=";
    cin>>name;
    cout<<"\n enter member add=";
    cin>>add;
    cout<<"\n enter member sal=";
    cin>>sal;
 }

 void cal_tax(){
if(sal<=20000)
tax=0;
else if(sal<40000)
tax=5*sal/100;
else
tax=10*sal/100;

 }
void disp(){
cout<<"member name="<<name;
cout<<"\nmember add="<<add;
cout<<"\nmember sal="<<sal;
cout<<"\nmember tax="<<tax;
}


};


int main(){
member ob;
ob.accept();
ob.cal_tax();
ob.disp();
  return 0;
}