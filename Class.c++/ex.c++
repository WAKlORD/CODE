#include <iostream>
using namespace std;

struct car
{
    string model, brand;
    int year;
    int price;
};

int main()
{
    car c1;
    
    cout<<"Enter Car Brand: ";
    cin>>c1.brand;
    cout<<"Enter Car Model: ";
    cin>>c1.model;
    cout<<"Enter Year: ";
    cin >> c1.year;
    cout<<"Enter price: ";
    cin>>c1.price;


    cout<<"\nDisplaying Information." << endl;
    cout<<"Brand: " << c1.brand << endl;
    cout<<"Model: " << c1.model << endl;
    cout<<"Year: " << c1.year<< endl;
    cout<<"Price: " <<c1.price;

    return 0;
}