#include<iostream>
using namespace std;

void avg_int(int a,int b,int c){
   int avg_i=a+b+c/3;
   cout<<"\n avg of integer numbers...."<<avg_i;
}
void avg_float(float a,float b,float c){
   float avg_f=a+b+c/3;
   cout<<"\n avg of integer numbers...."<<avg_f;
}


int main(){
avg_int(11,22,33);
avg_float(11.5,22.7,33.4);

}