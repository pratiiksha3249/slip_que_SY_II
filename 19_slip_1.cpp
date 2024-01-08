#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
    int eno;
    char ename[20],sal[10];
    
  void accept(int eno1,char ename1[20],char esal[20]){
    // int c=0;
    eno=eno1;
   strcpy(ename,ename1);
   strcpy(sal,esal);

    cout<<"\n enter eno...";
    cin>>eno;
    cout<<"\n enter emp name...";
    cin>>ename;
    cout<<"\n emp sal...";
    cin>>sal;
      
  }
void disp(){
    cout<<"\n emp eno="<<eno;
    cout<<"\n emp name="<<ename;
    cout<<"\n emp sal="<<sal;
}

}ob;

int main(){
 ob.accept(3,"tiksha","7000");
ob.disp();
    
}