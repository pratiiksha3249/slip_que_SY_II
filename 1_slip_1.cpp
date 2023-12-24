#include<iostream>
using namespace std;

inline int  show(int a,int b,int c){
return (a>b)?(a>c?a:c):(b>c?b:c);
}

int main()
{
int a,b,c;
cout<<"ente three num.....";
cin>>a>>b>>c;
 int l=show(a,b,c);
 cout<<"\n lagrge num is...."<<l;

  return 0;
}