// turboc
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<fstream.h>
#include<stdlib.h>
int main(){
ifstream f1;
ofstream f2,f3,f4,f5;
char ch;
clrscr();
f1.open("abc.txt");
f2.open("upper.txt",ios::out);
f3.open("lower.txt",ios::out);
f4.open("digit.txt",ios::out);
f5.open("other.txt",ios::out);
if(f1.fail()) {
cout<<"file not found...";
getch();
 exit(0);
}
 while(!f1.eof())
 {
  f1.get(ch);
  if(isupper(ch))
  f2.put(ch);
 else if(islower(ch))
  f3.put(ch);
 else if(isdigit(ch))
  f4.put(ch);
  else
  f5.put(ch);

 }
cout<<"copy succ...........";
f1.close();
f2.close();
f3.close();
f4.close();
f5.close();
getch();

}







