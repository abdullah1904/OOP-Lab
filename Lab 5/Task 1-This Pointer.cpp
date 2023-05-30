#include <iostream>
#include <string>
using namespace std;
class Driver{
private:
    string name, car;
    int age, id;
public:
    Driver(string="", string ="", int=00, int=00);
    void set();
    void print();
};
int main(){
    Driver D1("Abdullah", "Audi S8", 19, 525);
    D1.print();
    D1.set();
    D1.print();
    return 0;
}
Driver::Driver(string n, string c, int a, int iD){
    this->name = n;
    this->car = c;
    this->age = a;
    this->id = iD;
}
void Driver :: set(){
    cout<<" --: Enter Driver Information :--"<<endl;
    cout<<"Enter Name: ";
    getline(cin>>ws,this->name);
    cout<<"Enter Age: ";
    cin>>this->age;
    cout<<"Enter Car: ";
    getline(cin>>ws,this->car);
    cout<<"Enter Id: ";
    cin>>this->id;
}
void Driver :: print(){
    cout<<" --: Driver Informaion :-- "<<endl; 
    cout<<"Name:    "<<this->name<<endl;
    cout<<"Age:     "<<this->age<<endl;
    cout<<"Car:     "<<this->car<<endl;
    cout<<"ID:      "<<this->id<<endl;
}