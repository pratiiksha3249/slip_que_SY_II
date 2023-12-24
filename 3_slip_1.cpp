#include<iostream>
using namespace std;

void swap( int *a,int *b){
 int t=*a;
 *a=*b;
 *b=t;
 cout<<"\n swaped num= a nad b...."<<*a<<"\t"<<*b;
}
int main(){
int a=4,b=5;
swap(&a,&b);
    return 0;
}