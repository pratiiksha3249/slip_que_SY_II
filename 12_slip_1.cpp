#include<iostream>
using namespace std;
class date{
public:
int dd,mm,yy;

                date(){
                dd=12;
                mm=1;
                yy=2001;

}

date(int dd,int mm,int yy){
this->dd=dd;
this->mm=mm;
this->yy=yy;


}

void disp(){
                 if(mm==1)
                 cout<<dd<<":"<<"/jan/"<<yy;
                                  if(mm==2)
                 cout<<dd<<":"<<"/feb/"<<yy;
                                  if(mm==3)
                 cout<<dd<<":"<<"/mar/"<<yy;
                                  if(mm==4)
                 cout<<dd<<":"<<"/apr/"<<yy;
                                  if(mm==5)
                 cout<<dd<<":"<<"/may/"<<yy;
                                  if(mm==6)
                 cout<<dd<<":"<<"/jun/"<<yy;
                                  if(mm==7)
                 cout<<dd<<":"<<"/jul/"<<yy;
                                  if(mm==8)
                 cout<<dd<<":"<<"/aug/"<<yy;
                                  if(mm==9)
                 cout<<dd<<":"<<"/sup/"<<yy; 
                                  if(mm==10)
                 cout<<dd<<":"<<"/act/"<<yy;
                                  if(mm==11)
                 cout<<dd<<":"<<"/nov/"<<yy;
                                  if(mm==12)
                 cout<<dd<<":"<<"/dec/"<<yy;
}
};




int main(){
date ob;
ob.disp();
date ob1(2,2,2002);
ob1.disp();

}