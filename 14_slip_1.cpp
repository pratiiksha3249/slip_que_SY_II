#include<iostream>
using namespace std;

 inline int diameter(float r){
    return 2*r;
}

inline int circumference (int r){
    return 3.14*r;
}

inline int area (float r){
    return 2*3.14*r;
}

int main(){
   cout<<"\n diameter of circul="<<diameter(3.4);
    cout<<"\n circumference of circul="<<circumference(3);
    cout<<"\n area of circle="<<area(7.8);
}
