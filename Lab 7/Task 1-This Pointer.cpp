#include <iostream>
#include <string>
using namespace std;
class Driver{
private:
    string name, car;
    int age, id;
public:
    Driver(string="Ali", string ="Corolla", int=29, int=123);
    Driver& set();
    Driver& print();
};
int main(){
    Driver D1("Abdullah", "Audi S8", 19, 525);
    D1.print().set().print();
    return 0;
}
Driver::Driver(string n, string c, int a, int iD){
    this->name = n;
    this->car = c;
    this->age = a;
    this->id = iD;
}
Driver& Driver :: set(){
    cout<<" --: Enter Driver Information :--"<<endl;
    cout<<"Enter Name: ";
    getline(cin>>ws,this->name);
    cout<<"Enter Age: ";
    cin>>this->age;
    cout<<"Enter Car: ";
    getline(cin>>ws,this->car);
    cout<<"Enter Id: ";
    cin>>this->id;
    return *this;
}
Driver& Driver :: print(){
    cout<<" --: Driver Informaion :-- "<<endl; 
    cout<<"Name:    "<<this->name<<endl;
    cout<<"Age:     "<<this->age<<endl;
    cout<<"Car:     "<<this->car<<endl;
    cout<<"ID:      "<<this->id<<endl;
    return *this;
}