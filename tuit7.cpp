#include<iostream>
// commenting something
using namespace std;



int add(int a,int b){
    cout<<"Ussing Function with 2 arguments "<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using Function with 3 argments "<<endl;
   return a+b+c;
}
int volume(double r,int h){
    return (3.14*r*r*h);

}
int volume(int a){
     return a*a*a;}
     int volume(int l, int b,int h)
     {
          return l*b*h;
     }
int main(){
cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
cout<<"The sum of 3,7 and 6 is "<<add(3,7,6)<<endl;
cout<<"The sum of cylinder "<<volume(5,6)<<endl;
cout<<"The sum of cubeid "<<volume(4,5,5)<<endl;
cout<<"The sum of cube "<<volume(7)<<endl;
    return 0;
}