// turboc
#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include<iostream.h>


 class Time{
  public: char ss[10],mm[10],hh[10],s1[20];
  void operator>>(Time &ob){
   cout<<"enter secound minute hr:";
   cin>>ss>>mm>>hh;
  }
 void operator <<(Time &ob){
 cout<<"ss:"<<ss<<"mm"<<mm<<"hh"<<hh;

 }
 void operator ==(Time &ob){
 int  k=strcmp(s1,ob.s1);
 if(k==0)
 cout<<"string are queal";
 else
 cout<<"string are not queal";
 }

 };

int main(){
 Time ob,ob1;
 //clrscr();
 ob>>ob;
 ob<<ob;
 ob==ob1;
 //getch();
}