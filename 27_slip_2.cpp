#include<iostream>
#include<string.h>
using namespace std;
class travels{
public:
int tno;
char cname[20];
           void acceptt(){
              cout<<"enter travels no company name=:";
              cin>>tno>>cname; 
           }

};

class route:public travels{
public: char route1[20],source[20],destin[20];
          void acceptr(){
            cout<<"enter route source destination=:";
            cin>>route1>>source>>destin;
          }
};

class reservation:public route{
public: int no_of_seats,fee;
        char travel_class[20],tdate[20];
        void acceptre(){
             cout<<"no_of_seat,fees,travel_class,travel_data=:";
             cin>>no_of_seats>>fee>>travel_class>>tdate;
        }
        void disp(){
              cout<<" travels no company name=:"<<tno<<cname;
              cout<<"\n";
              cout<<" route source destination=:"<<route1<<source<<destin;
              cout<<"\n";
              cout<<"no_of_seat,fees,travel_class,travel_data=:"<<no_of_seats<<fee<<travel_class<<tdate;
                cout<<"\n";


        }
};
int main(){
int n,ch;
// reservation ob;
reservation ob[100];
do{
cout<<"1-accept n revervation 2-display all revervation 3-display specific rev of date\nenter choice..";
cin>>ch;


switch (ch)
{
case 1:cout<<"\n enter limit for revervation=:";
      cin>>n;
     
      for(int i=0;i<n;i++)
      ob[i].acceptt();

      for(int j=0;j<n;j++)
      ob[j].acceptr();

      for(int k=0;k<n;k++)
      ob[k].acceptre();

break;
case 2: 
        for (int i=0;i<n;i++){
        cout<<"\n";
             ob[i].disp();
        }
          

break;
case 3:
      char dd[20];
       cout<<"enter date for search=:";
       cin>>dd;
       for(int j=0;j<n;j++){
        if(strcmp(ob[j].tdate,dd)){
            ob[j].disp();
            break;
        }
       }
break;
}

}while(ch!=4);


    return 0;
}