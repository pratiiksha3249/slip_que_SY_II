#include<iostream>
#include<string.h>
using namespace std;
class stud {
public:
   int sno;
   char sname[40];
    float per;
    void accept(int sno,char sname[20], float per){
         this->sno=sno;
         strcpy(this->sname,sname);
         this->per=per;
    }
    void disp(){
       cout<<"sturdent sno="<<sno<<endl;
       cout<<"sturdent name="<<sname<<endl;
       cout<<"sturdent per="<<per<<endl;
    }


}ob,ob1;

int main(){
ob.accept(1,"tiksha",789000);
ob1.accept(2,"priya",7000);

if(ob.per>ob1.per){
    ob.disp();
}
else{
    ob1.disp();
}
  
}