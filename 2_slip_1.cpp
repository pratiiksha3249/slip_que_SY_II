#include<iostream>
using namespace std;


void cylinder( float r,float h){
float v=3.14*r*r*h;
cout<<"\n volume of cylinder..."<<v;
}

void cone(float r,int h){
 float c=3.5*3.14*r*r*h;
cout<<"\n volume of cone..."<<c;
}

void sphere( int r){
  float  s=4/3*3.14*r*r*r;
    cout<<"\n volume of sphere.."<<s;
}

int main(){

 cylinder(2.3,5.6);
 cone(6.8,2);
 sphere(12);

return 0;
}