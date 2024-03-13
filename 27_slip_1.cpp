#include<stdio.h>
#include<conio.h>
#include<iostream.h>
 class College
 {
  public: int cid;
	   char cname[20],uyear[20],ucity[20];

	   void operator >>(College &ob){
	    cout<<"enter cid cname eyear ucity:";
	    cin>>cid>>cname>>uyear>>ucity;

	   }

		   void operator <<(College &ob){
		    cout<<"cid="<<cid<<endl;
		      cout<<"cname="<<cname<<endl;
		      cout<<"uyear="<<uyear<<endl;
		      cout<<"ucity="<<ucity<<endl;


		   }



 };
 int main(){
  College ob;
  clrscr();
  ob>>ob;
  ob<<ob;
  getch();



 }















