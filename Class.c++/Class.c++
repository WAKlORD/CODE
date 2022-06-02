#include <iostream>
using namespace std;
 class A{
     int a;
     public:
     int *ptr;
     A()
     {
         cout<<"construct of class "<<endl;
     }
 };
 int main(){
     A *a=new A;
     cout<<"object of class n"<<""<<endl;
     A* b=(A*)malloc(sizeof(A));
     cout <<"object of class A"<<"created using  malloc fumction"<<endl;
     return 0;
 }
