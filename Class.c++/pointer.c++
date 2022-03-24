#include <iostream>
using namespace std;

int main(){
    int a;
    int* ptr;
    ptr = &a;
    a = 10;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of a = "<<ptr<<endl;
    return 0;
}