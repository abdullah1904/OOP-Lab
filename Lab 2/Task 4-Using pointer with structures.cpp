#include <iostream>
#include <string>
using namespace std;
struct car{
    string brand;
    string model;
    int hp;
    int torque;
    string price;
};
void print(car*);
void change(car*);
int main(){
    car Mycar = {"Ford", "Mustang", 315, 350,"$100 000"};
    print(&Mycar);
    change(&Mycar);
    print(&Mycar);
    return 0;
}
void print(car *cars){
    cout<<"Brand: "<<(cars->brand)<<endl;
    cout<<"Model: "<<(cars->model)<<endl;
    cout<<"Horse Power: "<<(cars->hp)<<endl;
    cout<<"Torque: "<<(cars->torque)<<endl;
    cout<<"Price: "<<(cars->price)<<endl;
}
void change(car *car){
    cout<<"Enter New Car Brand Name: ";
    getline(cin, car->brand);
    cout<<"Enter New Car Model Name: ";
    getline(cin, car->model);
    cout<<"Enter New Car Price: ";
    getline(cin, car->price);
    cout<<"Enter New Horse Power: ";
    cin>>car->hp;
    cout<<"Enter New Torque: ";
    cin>>car->torque;
}