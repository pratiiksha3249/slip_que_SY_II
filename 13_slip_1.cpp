#include<iostream>
#include<string.h>
using namespace std;
class product {
public:

                 static void  accept(){
                            int id;
                             char pname[20];
                             float rate;
                             
                              cout<<"\n enter pid pname rate=";
                              cin>>id>>pname>>rate;
              
                              cout<<"\n pid="<<id;
                              cout<<"\n pname="<<pname;
                              cout<<"\n rate="<<rate;


                }


          };


int main(){
product ob;
ob.accept();
//also we can call in this way
product::accept();

}



