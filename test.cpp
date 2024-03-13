 // Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily 
// rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary) 
// from Employee. Write a C++ menu driven program to:
// i.Accept the details of ‘n’ employees and calculate the salary.
// ii. Display the details of ‘n’ employees.
// iii. Search a given Employee.
#include<iostream>
using namespace std;
int n;

class Employee{
public: int eno,sal;
         char ename[20];
         void Accepte(){
                    cout<<"\n enter eno ename =:";
                    cin>>eno>>ename;
         }

};
class Fulltime:public Employee{
    public: int daily_wages,no_of_days;
    float sall;
    void Acceptf(){
            cout<<"enter daily_wages and no_of_days=:";
            cin>>daily_wages>>no_of_days;

    }
    void calf(){
         sall=(float)daily_wages*no_of_days;
        cout<<"emp sal="<<sall;
    }
    void dispf(){
        cout<<"emp no="<<eno<<endl;
        cout<<"emp name="<<ename<<endl;
        cout<<"emp daily_wages="<<daily_wages<<endl;
        cout<<"emp no of days="<<no_of_days<<endl;
        

    }

};

class Parttime:public Employee{
public:  int no_of_hours,hourly_wages,sall;
              void Acceptp(){
                cout<<"enter no_of_hours and hourly_wages=:";
                cin>>no_of_hours>>hourly_wages;
              }

              void calp(){
                
                sall=no_of_hours*hourly_wages;
                        cout<<"\n emp sal="<<sall<<endl;

              }
              void dispp(){
                
        cout<<"emp no="<<eno<<endl;
        cout<<"emp name="<<ename<<endl;
        cout<<"emp no_of_hours ="<<no_of_hours<<endl;
        cout<<"emp hourlv wages="<<hourly_wages<<endl;
       
              }

   
};

int main(){



// Parttime ob1[n];
//if you want to call parttime class then replace with parttime functions
int ch,max=0;
Fulltime ob[100];
do{
cout<<"1-enter n rec 2-display all rec 3-cal  sal   4-display max sal emp...... ";
 cin>>ch;
 switch (ch)
 {
case 1: cout<<"\n enter limit for records of emp..." ;
         cin>>n;
  for( int i=0;i<n;i++)
        ob[i].Accepte();
        for(int j=0;j<n;j++)
         ob[j].Acceptf();
break;

case 2: 
 for( int i=0;i<n;i++)
        ob[i].dispf();

break;
case 3: 

 for( int i=0;i<n;i++)
        ob[i].calf();

break;
case 4:           
               for( int i=0;i<n;i++){
                       ob[i].calf();
                       cout<<endl;
               }
                  for(int i=0;i<n;i++)
                          {
                            if(max<ob[i].sall){
                            max=ob[i].sall;
                            }

                          }
  cout<<"max sal emp is============"<<endl;
                for(int j=0;j<n;j++){
                      if(ob[j].sall==max){
                        ob[j].dispf();
                        
                      }
                }

 }
 
 
  }while(ch!=5);


    return 0;
}