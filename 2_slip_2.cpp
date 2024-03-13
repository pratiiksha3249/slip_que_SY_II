   #include<stdio.h>
   #include<conio.h>
   #include<fstream.h>
   #include<iostream.h>
   class Movie{
     public:ofstream f1;
	    ifstream f2;
	    int mid;
	    char mname[20],ryear[20],dname[20];


	    void accept(int n){
	     f1.open("m.txt",ios::out);
	     for(int i=0;i<n;i++)
	     {
	      cout<<"enter mid mname ryear dname:";
	      cin>>mid>>mname>>ryear>>dname;
	      f1<<mid<<endl;
	      f1<<mname<<endl;
	      f1<<ryear<<endl;
	      f1<<dname<<endl;
		 }

	    f1.close();
	    }
	   void disp(int n){
	   f2.open("m.txt",ios::in);
	   for(int i=0;i<n;i++){
	    f2>>mid;
	    f2>>mname;
	    f2>>ryear;
	    f2>>dname;
	    cout<<"movie id:"<<mid<<endl;
	    cout<<" m name:"<<mname<<endl;
	    cout<<"ryear:"<<ryear<<endl;
	    cout<<"dname:"<<dname<<endl;

	   }
	   }

};



int main(){
 Movie ob;
 int n;
 clrscr();
 cout<<"enter limit for records:";
 cin>>n;
 ob.accept(n);
 ob.disp(n);
 getch();
}