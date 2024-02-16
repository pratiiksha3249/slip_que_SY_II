#include<iostream>
using namespace std;

class student{
          public:int sid;
           char sname[20],sclass[20];

           void accepts(){

            cout<<"enter sid sname sclass=:";
            cin>>sid>>sname>>sclass;
           }

};
class competition{
public: int cid;
char cname[20];
                   void acceptc(){
                    cout<<"enter cid and cname=:";
                    cin>>cid>>cname;
                   }



};

class stud_comp:public student,public competition{
public: int rank;
         void acceptr(){
            cout<<"enter rank=:";
            cin>>rank;
         }

         void disp(){

            cout<<"stud id="<<sid<<endl;
            cout<<"stud name="<<sname<<endl;
            cout<<"sclass="<<sclass<<endl;
            cout<<"comp id="<<cid<<endl;
            cout<<"comp name="<<cname<<endl;
            cout<<"rank================"<<rank<<endl;
           
         }



};


int main(){

int ch,n;
  do{
cout<<"1-accept info 2-display 3- display stud in accending order with rank\n enter choice..";
cin>>ch;
stud_comp ob[100];
switch(ch){
case 1:cout<<"enter limit for rec=";
       cin>>n;
       for(int i=0;i<n;i++)
    ob[i].accepts();
    for(int j=0;j<n;j++)
       ob[j].acceptc();
       for(int k=0;k<n;k++)
       ob[k].acceptr();
break;
case 2:for(int p=0;p<n;p++)
      ob[p].disp();
break;

case 3:
          for(int pass=1;pass<n;pass++){
         for(int i=0;i<n-pass;i++){
                 if(ob[i].rank>ob[i+1].rank){
                    stud_comp ob1=ob[i];
                    ob[i]=ob[i+1];
                    ob[i+1]=ob1;
                   
                 }
         }
          }


          for(int i=0;i<n;i++)
            ob[i].disp();





 for(int pass=1;pass<n;pass++){
         for(int i=0;i<n-pass;++i){
                 if(ob[i].rank>ob[i+1].rank){
                    stud_comp ob1=ob[i];
                    ob[i]=ob[i+1];
                    ob[i+1]=ob1;
                   
                 }
         }
          }

}

  }while(ch!=4);



return 0;
}



// #include<iostream>
// using namespace std;

// class student {
// public:
//     int sid;
//     char sname[20], sclass[20];

//     void accepts() {
//         cout << "enter sid sname sclass=: ";
//         cin >> sid >> sname >> sclass;
//     }
// };

// class competition {
// public:
//     int cid;
//     char cname[20];

//     void acceptc() {
//         cout << "enter cid and cname=: ";
//         cin >> cid >> cname;
//     }
// };

// class stud_comp : public student, public competition {
// public:
//     int studentRank;

//     void acceptr() {
//         cout << "enter rank=: ";
//         cin >> studentRank;
//     }

//     void disp() {
//         cout << "stud id=" << sid << endl;
//         cout << "stud name=" << sname << endl;
//         cout << "sclass=" << sclass << endl;
//         cout << "comp id=" << cid << endl;
//         cout << "comp name=" << cname << endl;
//         cout << "rank================" << studentRank << endl;
//     }
// };

// int main() {
//     int ch, n;
//     do {
//         cout << "1-accept info 2-display 3-display stud in ascending order of rank\n enter choice: ";
//         cin >> ch;
//         stud_comp ob[100];
//         switch (ch) {
//             case 1:
//                 cout << "enter limit for records: ";
//                 cin >> n;
//                 for (int i = 0; i < n; i++)
//                     ob[i].accepts();
//                 for (int j = 0; j < n; j++)
//                     ob[j].acceptc();
//                 for (int k = 0; k < n; k++)
//                     ob[k].acceptr();
//                 break;
//             case 2:
//                 for (int p = 0; p < n; p++)
//                     ob[p].disp();
//                 break;
//             case 3:
//                 for (int pass = 1; pass < n; pass++) {
//                     for (int i = 0; i < n - pass; i++) {
//                         if (ob[i].studentRank > ob[i + 1].studentRank) {
//                             stud_comp ob1 = ob[i];
//                             ob[i] = ob[i + 1];
//                             ob[i + 1] = ob1;
//                         }
//                     }
//                 }








//                 for (int i = 0; i < n; i++) {
//                     ob[i].disp();
//                 }
//                 break;
//         }
//     } while (ch != 4);
//     return 0;
// }