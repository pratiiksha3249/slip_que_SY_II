#include<iostream>
using namespace std;
class stud {
public:
char *name1[20],*name2[20];
int *rno1,*rno2;
float *per1,*per2;

void accept(){
cout<<"\n enter name rno per of first strucnt....";
cin>>*name1>>*rno1>>*per1;
cout<<"\n enter name2 rno2 per2 of secount strucnt....";
cin>>*name2>>*rno2>>*per2;
}
void max_disp(){
if(*per1>*per2){
    cout<<"\n name1 rno1 per1 is..."<<*name1<<"\t"<<*rno1<<"\t"<<*per1;
}
else{
    cout<<"\n name2 rno2 per2 is..."<<*name2<<"\t"<<*rno2<<"\t"<<*per2;
}
}
};

int main(){

stud ob;
ob.accept();
ob.max_disp();
  
}