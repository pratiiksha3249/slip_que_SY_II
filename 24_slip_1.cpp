#include <iostream>
#include <string.h>
using namespace std;
class fixDeposit
{
public:
    int fno, nmonth;
    char cname[70];
    float famt, irate, mamt;

    fixDeposit(int fno = 1, int nmonth = 3, char cname[70] = "tiksha", float famt = 500, float irate = 2, float mamt = 50)
    {

           this->fno=fno;
           strcpy(this->cname,cname);
           this->famt=famt;
           this->irate=irate;
           this->mamt=mamt;

    }

    void disp(){
        cout<<"\nfno  = "<<fno;
        cout<<"\n cname = "<<cname ;
        cout<<"\n famt = "<<famt;
        cout<<"\n irate = "<<irate;
        cout<<"\n mamt = "<<mamt;

    }




};

int main(){
fixDeposit ob;
//ob.accept();
ob.disp();

}