#include<iostream>
using namespace std;
class E_bill{
    public:
    char name[20];
    int mid,unit;
    float total;
 void accept(){
cout<<"\n ente name=";
cin>>name;
cout<<"\n enter meter id=";
cin>>mid;
cout<<"\n enter unit=";
cin>>unit;
 }

void cal(){
    if(unit<=100)
    total=unit*1;
    else if(unit>100 && unit<=200)
    {
        total=unit*1;
         unit=unit-100;
        total=total+unit*2;
    }
    else{
        total=100*1;
        unit=unit-100;
        total=total+(100*2);
        unit=unit-100;
        total=total+unit*5;
    }

    total=total+150;
    if(total>=250)
    total=total+(total*0.15);
}

void disp(){
cout<<"name="<<name;
cout<<"\n meter id="<<mid;
cout<<"\n unit="<<unit;
cout<<"\n total="<<total;

}
};



int main(){
E_bill ob;
ob.accept();
ob.cal();
ob.disp();   
}